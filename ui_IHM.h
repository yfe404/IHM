/********************************************************************************
** Form generated from reading UI file 'IHM.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IHM_H
#define UI_IHM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOuvrir_fichier;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *FrameConnect;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *iP;
    QLineEdit *ipAdress;
    QPushButton *bConnect;
    QLabel *conn;
    QLineEdit *stateConn;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *bPlay;
    QToolButton *bPause;
    QToolButton *bStop;
    QSpacerItem *horizontalSpacer_3;
    QFrame *FrameDisplay;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabMaster;
    QWidget *tabPos;
    QPushButton *lireFic;
    QTextBrowser *textBrowser;
    QWidget *tabAccel;
    QWidget *tabDebug;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1039, 647);
        actionOuvrir_fichier = new QAction(MainWindow);
        actionOuvrir_fichier->setObjectName(QStringLiteral("actionOuvrir_fichier"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        FrameConnect = new QFrame(centralwidget);
        FrameConnect->setObjectName(QStringLiteral("FrameConnect"));
        FrameConnect->setMinimumSize(QSize(0, 40));
        FrameConnect->setMaximumSize(QSize(16777215, 40));
        FrameConnect->setFrameShape(QFrame::StyledPanel);
        FrameConnect->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(FrameConnect);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        iP = new QLabel(FrameConnect);
        iP->setObjectName(QStringLiteral("iP"));
        iP->setMinimumSize(QSize(20, 0));
        iP->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_2->addWidget(iP);

        ipAdress = new QLineEdit(FrameConnect);
        ipAdress->setObjectName(QStringLiteral("ipAdress"));
        ipAdress->setMinimumSize(QSize(157, 0));
        ipAdress->setMaximumSize(QSize(157, 16777215));

        horizontalLayout_2->addWidget(ipAdress);

        bConnect = new QPushButton(FrameConnect);
        bConnect->setObjectName(QStringLiteral("bConnect"));
        bConnect->setMinimumSize(QSize(75, 0));
        bConnect->setMaximumSize(QSize(75, 16777215));

        horizontalLayout_2->addWidget(bConnect);

        conn = new QLabel(FrameConnect);
        conn->setObjectName(QStringLiteral("conn"));
        conn->setMinimumSize(QSize(120, 0));
        conn->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_2->addWidget(conn);

        stateConn = new QLineEdit(FrameConnect);
        stateConn->setObjectName(QStringLiteral("stateConn"));
        stateConn->setEnabled(false);
        stateConn->setMinimumSize(QSize(125, 0));
        stateConn->setMaximumSize(QSize(125, 16777215));
        stateConn->setReadOnly(true);

        horizontalLayout_2->addWidget(stateConn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        bPlay = new QToolButton(FrameConnect);
        bPlay->setObjectName(QStringLiteral("bPlay"));
        bPlay->setMaximumSize(QSize(16, 16));
        QIcon icon;
        icon.addFile(QStringLiteral("Img/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        bPlay->setIcon(icon);
        bPlay->setIconSize(QSize(16, 16));
        bPlay->setAutoRaise(true);

        horizontalLayout_2->addWidget(bPlay);

        bPause = new QToolButton(FrameConnect);
        bPause->setObjectName(QStringLiteral("bPause"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("Img/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        bPause->setIcon(icon1);
        bPause->setAutoRaise(true);

        horizontalLayout_2->addWidget(bPause);

        bStop = new QToolButton(FrameConnect);
        bStop->setObjectName(QStringLiteral("bStop"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("Img/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        bStop->setIcon(icon2);
        bStop->setAutoRaise(true);

        horizontalLayout_2->addWidget(bStop);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout->addWidget(FrameConnect, 0, 0, 1, 1);

        FrameDisplay = new QFrame(centralwidget);
        FrameDisplay->setObjectName(QStringLiteral("FrameDisplay"));
        FrameDisplay->setFrameShape(QFrame::StyledPanel);
        FrameDisplay->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(FrameDisplay);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tabMaster = new QTabWidget(FrameDisplay);
        tabMaster->setObjectName(QStringLiteral("tabMaster"));
        tabMaster->setMinimumSize(QSize(0, 350));
        tabMaster->setMaximumSize(QSize(16777215, 16777215));
        tabMaster->setAutoFillBackground(false);
        tabPos = new QWidget();
        tabPos->setObjectName(QStringLiteral("tabPos"));
        lireFic = new QPushButton(tabPos);
        lireFic->setObjectName(QStringLiteral("lireFic"));
        lireFic->setGeometry(QRect(70, 70, 311, 171));
        textBrowser = new QTextBrowser(tabPos);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(440, 50, 521, 401));
        tabMaster->addTab(tabPos, QString());
        tabAccel = new QWidget();
        tabAccel->setObjectName(QStringLiteral("tabAccel"));
        tabMaster->addTab(tabAccel, QString());
        tabDebug = new QWidget();
        tabDebug->setObjectName(QStringLiteral("tabDebug"));
        tabMaster->addTab(tabDebug, QString());

        horizontalLayout->addWidget(tabMaster);


        gridLayout->addWidget(FrameDisplay, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1039, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabMaster->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionOuvrir_fichier->setText(QApplication::translate("MainWindow", "Ouvrir fichier", 0));
        iP->setText(QApplication::translate("MainWindow", "IP :", 0));
        bConnect->setText(QApplication::translate("MainWindow", "Connexion", 0));
        conn->setText(QApplication::translate("MainWindow", "Etat de la connexion : ", 0));
        stateConn->setText(QString());
        bPlay->setText(QApplication::translate("MainWindow", "Play", 0));
        bPause->setText(QApplication::translate("MainWindow", "...", 0));
        bStop->setText(QApplication::translate("MainWindow", "...", 0));
        lireFic->setText(QApplication::translate("MainWindow", "Lire Fichier", 0));
        tabMaster->setTabText(tabMaster->indexOf(tabPos), QApplication::translate("MainWindow", "Temporaire", 0));
        tabMaster->setTabText(tabMaster->indexOf(tabAccel), QApplication::translate("MainWindow", "Donn\303\251es trait\303\251es", 0));
        tabMaster->setTabText(tabMaster->indexOf(tabDebug), QApplication::translate("MainWindow", "Donn\303\251es brutes", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IHM_H