/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *btn_add;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QToolButton *btn_previous;
    QToolButton *btn_play;
    QToolButton *btn_pause;
    QToolButton *btn_next;
    QToolButton *left;
    QToolButton *rght;
    QToolButton *vol;
    QSlider *volume;
    QTableView *playlistView;
    QLabel *cur_c;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(350, 361);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        Widget->setMinimumSize(QSize(285, 0));
        Widget->setMaximumSize(QSize(350, 16777215));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(243, 240, 249, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(249, 247, 252, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(121, 120, 124, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(162, 160, 166, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush7(QColor(0, 0, 0, 128));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        Widget->setPalette(palette);
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        Widget->setFont(font);
        Widget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btn_add = new QToolButton(Widget);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        btn_add->setCursor(QCursor(Qt::PointingHandCursor));
        btn_add->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/buttons/plus2.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_add->setIcon(icon);

        horizontalLayout_3->addWidget(btn_add);

        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(label);


        gridLayout->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 7, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_previous = new QToolButton(Widget);
        btn_previous->setObjectName(QString::fromUtf8("btn_previous"));
        btn_previous->setCursor(QCursor(Qt::PointingHandCursor));
        btn_previous->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/buttons/left.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_previous->setIcon(icon1);

        horizontalLayout->addWidget(btn_previous);

        btn_play = new QToolButton(Widget);
        btn_play->setObjectName(QString::fromUtf8("btn_play"));
        btn_play->setCursor(QCursor(Qt::PointingHandCursor));
        btn_play->setStyleSheet(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/buttons/play2.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_play->setIcon(icon2);

        horizontalLayout->addWidget(btn_play);

        btn_pause = new QToolButton(Widget);
        btn_pause->setObjectName(QString::fromUtf8("btn_pause"));
        btn_pause->setCursor(QCursor(Qt::PointingHandCursor));
        btn_pause->setStyleSheet(QString::fromUtf8(""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/buttons/pause2.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_pause->setIcon(icon3);

        horizontalLayout->addWidget(btn_pause);

        btn_next = new QToolButton(Widget);
        btn_next->setObjectName(QString::fromUtf8("btn_next"));
        btn_next->setCursor(QCursor(Qt::PointingHandCursor));
        btn_next->setStyleSheet(QString::fromUtf8(""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/buttons/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_next->setIcon(icon4);

        horizontalLayout->addWidget(btn_next);

        left = new QToolButton(Widget);
        left->setObjectName(QString::fromUtf8("left"));
        left->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/buttons/nazad.png"), QSize(), QIcon::Normal, QIcon::Off);
        left->setIcon(icon5);

        horizontalLayout->addWidget(left);

        rght = new QToolButton(Widget);
        rght->setObjectName(QString::fromUtf8("rght"));
        rght->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/buttons/vpered.png"), QSize(), QIcon::Normal, QIcon::Off);
        rght->setIcon(icon6);

        horizontalLayout->addWidget(rght);

        vol = new QToolButton(Widget);
        vol->setObjectName(QString::fromUtf8("vol"));
        vol->setMinimumSize(QSize(27, 26));
        vol->setMaximumSize(QSize(27, 26));
        vol->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/buttons/zvuk_on.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon7.addFile(QString::fromUtf8(":/buttons/zvuk_on.png"), QSize(), QIcon::Normal, QIcon::On);
        icon7.addFile(QString::fromUtf8(":/buttons/zvuk_of.png"), QSize(), QIcon::Disabled, QIcon::Off);
        icon7.addFile(QString::fromUtf8(":/buttons/zvuk_of.png"), QSize(), QIcon::Disabled, QIcon::On);
        vol->setIcon(icon7);

        horizontalLayout->addWidget(vol);

        volume = new QSlider(Widget);
        volume->setObjectName(QString::fromUtf8("volume"));
        volume->setMaximumSize(QSize(47, 22));
        volume->setCursor(QCursor(Qt::PointingHandCursor));
        volume->setStyleSheet(QString::fromUtf8(""));
        volume->setMaximum(100);
        volume->setPageStep(10);
        volume->setValue(100);
        volume->setSliderPosition(100);
        volume->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(volume);


        gridLayout->addLayout(horizontalLayout, 5, 1, 1, 1);

        playlistView = new QTableView(Widget);
        playlistView->setObjectName(QString::fromUtf8("playlistView"));
        playlistView->setMinimumSize(QSize(263, 158));
        playlistView->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        playlistView->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));
        playlistView->setProperty("showDropIndicator", QVariant(true));
        playlistView->setShowGrid(true);
        playlistView->setGridStyle(Qt::NoPen);
        playlistView->setWordWrap(true);
        playlistView->horizontalHeader()->setVisible(false);
        playlistView->horizontalHeader()->setHighlightSections(false);
        playlistView->verticalHeader()->setVisible(false);
        playlistView->verticalHeader()->setHighlightSections(false);

        gridLayout->addWidget(playlistView, 3, 0, 1, 2);

        cur_c = new QLabel(Widget);
        cur_c->setObjectName(QString::fromUtf8("cur_c"));
        cur_c->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(cur_c, 6, 1, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\320\234\321\203\320\267\321\213\320\272\320\260\320\273\321\214\320\275\321\213\320\271 \320\277\320\273\320\265\320\265\321\200", nullptr));
        label->setText(QApplication::translate("Widget", "  \320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\321\213\320\265 \321\202\321\200\320\265\320\272\320\270", nullptr));
        label_2->setText(QApplication::translate("Widget", "\320\224\320\273\320\270\320\275\320\260 \321\202\321\200\320\265\320\272\320\260 ...", nullptr));
        btn_previous->setText(QApplication::translate("Widget", "...", nullptr));
        btn_play->setText(QApplication::translate("Widget", "Play", nullptr));
        btn_pause->setText(QApplication::translate("Widget", "...", nullptr));
        btn_next->setText(QApplication::translate("Widget", "...", nullptr));
        left->setText(QString());
        rght->setText(QApplication::translate("Widget", ">", nullptr));
        vol->setText(QString());
        cur_c->setText(QApplication::translate("Widget", "\320\242\320\265\320\272\321\203\321\211\320\270\320\271 \321\202\321\200\320\265\320\272 ...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
