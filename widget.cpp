#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QDir>
#include <string>
#include <QString>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->volume->setRange(0, 100);
    ui->volume->setFixedWidth(80);
    ui->volume->setValue(100);
    ui->playlistView->setStyleSheet("background: url(:/buttons/fon2.png)");
    m_playListModel = new QStandardItemModel(this);
    ui->playlistView->setModel(m_playListModel);
    ui->playlistView->verticalHeader()->setVisible(false);
    ui->playlistView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->playlistView->setSelectionMode(QAbstractItemView::NoSelection);
    ui->playlistView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    m_player = new QMediaPlayer(this);
    m_playlist = new QMediaPlaylist(m_player);
    m_player->setPlaylist(m_playlist);
    m_playlist->setPlaybackMode(QMediaPlaylist::Loop);
    connect(ui->btn_previous, &QToolButton::clicked, m_playlist, &QMediaPlaylist::previous);
    connect(ui->btn_next, &QToolButton::clicked, m_playlist, &QMediaPlaylist::next);
    connect(ui->btn_play, &QToolButton::clicked, m_player, &QMediaPlayer::play);
    connect(ui->btn_pause, &QToolButton::clicked, m_player, &QMediaPlayer::pause);
    connect(ui->playlistView, &QTableView::doubleClicked, [this](const QModelIndex &index){
        m_playlist->setCurrentIndex(index.row());
    });
    connect(m_playlist, &QMediaPlaylist::currentIndexChanged, [this](int index){
        ui->cur_c->setText(m_playListModel->data(m_playListModel->index(index, 0)).toString());
    connect(ui->volume, SIGNAL(valueChanged(int)),m_player, SLOT(setVolume(int)));
    });
}

Widget::~Widget()
{
    delete ui;
    delete m_playListModel;
    delete m_playlist;
    delete m_player;
}

void Widget::on_btn_add_clicked()
{
    QStringList files = QFileDialog::getOpenFileNames(this, tr("Open files"), QString(), tr("Audio Files (*.mp3)"));
    foreach (QString filePath, files) {
        QList<QStandardItem *> items;
        items.append(new QStandardItem(QDir(filePath).dirName()));
        items.append(new QStandardItem(filePath));
        m_playListModel->appendRow(items);
        m_playlist->addMedia(QUrl(filePath));
        ui->playlistView->setColumnWidth(0, 203);
        ui->playlistView->setColumnWidth(1, 0);
         ui->playlistView->setColumnWidth(2, 60);
         double dur;
         connect(m_player, &QMediaPlayer::durationChanged, this, [&](qint64 dur) {
                     dur = m_player->duration();
                     int m = dur/1000/60;
                     int s = dur/1000%60;
                     if(s>9)
                 ui->label_2->setText(QString("%1%2%3%4").arg("Длина трека: ").arg(m).arg(":").arg(s));
                     else
                         ui->label_2->setText(QString("%1%2%3%4").arg("Длина трека: ").arg(m).arg(":0").arg(s));
                 });
    }
}

void Widget::on_btn_play_clicked()
{

double dur;
connect(m_player, &QMediaPlayer::durationChanged, this, [&](qint64 dur) {
            dur = m_player->duration();
            int m = dur/1000/60;
            int s = dur/1000%60;
            if(s>9)
        ui->label_2->setText(QString("%1%2%3%4").arg("Длина трека: ").arg(m).arg(":").arg(s));
            else
                ui->label_2->setText(QString("%1%2%3%4").arg("Длина трека: ").arg(m).arg(":0").arg(s));
        });



}


void Widget::on_left_clicked()
{

    double pos;
    pos = m_player->position();
    pos = pos - 10000;
    if(pos<=0)  m_player->setPosition(0);
    else {
        m_player->setPosition(pos);
    }


}

void Widget::on_vol_clicked()
{

if (ui->volume->sliderPosition()!=0) {

    ui->volume->setValue(0);
    ui->volume->setSliderPosition(0);
     ui->vol->setIcon(QIcon(QPixmap(":/buttons/zvuk_of.png")));
}

else {
    ui->volume->setValue(100);
    ui->volume->setSliderPosition(100);
    ui->vol->setIcon(QIcon(QPixmap(":/buttons/zvuk_on.png")));
}
}

void Widget::on_rght_clicked()
{
    double dur;
    dur = m_player->duration();
    double pos;
    pos = m_player->position();
    pos = pos + 10000;
    if (pos < dur)
        m_player->setPosition(pos);
    else ui->btn_next->click();
}

