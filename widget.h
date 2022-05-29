#ifndef WIDGET_H
#define WIDGET_H
#include <QWidget>
#include <QStandardItemModel>
#include <QMediaPlayer>
#include <QMediaPlaylist>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
     void on_vol_clicked();
     void on_rght_clicked();
     void on_btn_add_clicked();
     void on_btn_play_clicked();
     void on_left_clicked();

private:
    Ui::Widget *ui;
    QStandardItemModel  *m_playListModel;
    QMediaPlayer        *m_player;
    QMediaPlaylist      *m_playlist;
};

#endif // WIDGET_H
