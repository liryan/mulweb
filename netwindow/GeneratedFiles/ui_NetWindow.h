/********************************************************************************
** Form generated from reading UI file 'NetWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWINDOW_H
#define UI_NETWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetWindowClass
{
public:
    QAction *actOpen;
    QAction *actExit;
    QAction *actAbout;
    QAction *actSplit;
    QAction *actFind;
    QAction *actCopy;
    QAction *actPaste;
    QAction *actNewTab;
    QAction *actCloseTab;
    QAction *actCloseAll;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuOp;
    QMenu *menuHelp;
    QMenu *menu;
    QMenu *menu_2;

    void setupUi(QMainWindow *NetWindowClass)
    {
        if (NetWindowClass->objectName().isEmpty())
            NetWindowClass->setObjectName(QStringLiteral("NetWindowClass"));
        NetWindowClass->resize(940, 598);
        actOpen = new QAction(NetWindowClass);
        actOpen->setObjectName(QStringLiteral("actOpen"));
        actExit = new QAction(NetWindowClass);
        actExit->setObjectName(QStringLiteral("actExit"));
        actAbout = new QAction(NetWindowClass);
        actAbout->setObjectName(QStringLiteral("actAbout"));
        actSplit = new QAction(NetWindowClass);
        actSplit->setObjectName(QStringLiteral("actSplit"));
        actFind = new QAction(NetWindowClass);
        actFind->setObjectName(QStringLiteral("actFind"));
        actCopy = new QAction(NetWindowClass);
        actCopy->setObjectName(QStringLiteral("actCopy"));
        actPaste = new QAction(NetWindowClass);
        actPaste->setObjectName(QStringLiteral("actPaste"));
        actNewTab = new QAction(NetWindowClass);
        actNewTab->setObjectName(QStringLiteral("actNewTab"));
        actCloseTab = new QAction(NetWindowClass);
        actCloseTab->setObjectName(QStringLiteral("actCloseTab"));
        actCloseAll = new QAction(NetWindowClass);
        actCloseAll->setObjectName(QStringLiteral("actCloseAll"));
        centralWidget = new QWidget(NetWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        NetWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(NetWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 940, 23));
        menuOp = new QMenu(menuBar);
        menuOp->setObjectName(QStringLiteral("menuOp"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        NetWindowClass->setMenuBar(menuBar);

        menuBar->addAction(menuOp->menuAction());
        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuOp->addAction(actOpen);
        menuOp->addAction(actExit);
        menuHelp->addAction(actAbout);
        menu->addAction(actFind);
        menu->addAction(actCopy);
        menu->addAction(actPaste);
        menu_2->addAction(actSplit);
        menu_2->addAction(actNewTab);
        menu_2->addAction(actCloseTab);
        menu_2->addAction(actCloseAll);

        retranslateUi(NetWindowClass);

        QMetaObject::connectSlotsByName(NetWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *NetWindowClass)
    {
        NetWindowClass->setWindowTitle(QApplication::translate("NetWindowClass", "\345\244\215\347\234\274\346\265\217\350\247\210\345\231\250", nullptr));
        actOpen->setText(QApplication::translate("NetWindowClass", "\346\211\223\345\274\200", nullptr));
        actExit->setText(QApplication::translate("NetWindowClass", "\351\200\200\345\207\272", nullptr));
        actAbout->setText(QApplication::translate("NetWindowClass", "\345\205\263\344\272\216", nullptr));
        actSplit->setText(QApplication::translate("NetWindowClass", "\345\210\206\345\211\262", nullptr));
        actFind->setText(QApplication::translate("NetWindowClass", "\346\237\245\346\211\276", nullptr));
        actCopy->setText(QApplication::translate("NetWindowClass", "\345\244\215\345\210\266", nullptr));
        actPaste->setText(QApplication::translate("NetWindowClass", "\347\262\230\350\264\264", nullptr));
        actNewTab->setText(QApplication::translate("NetWindowClass", "\346\226\260\351\241\265\347\255\276", nullptr));
        actCloseTab->setText(QApplication::translate("NetWindowClass", "\345\205\263\351\227\255\345\275\223\345\211\215\351\241\265\347\255\276", nullptr));
        actCloseAll->setText(QApplication::translate("NetWindowClass", "\345\205\263\351\227\255\346\211\200\346\234\211\351\241\265\347\255\276", nullptr));
        menuOp->setTitle(QApplication::translate("NetWindowClass", "\346\223\215\344\275\234", nullptr));
        menuHelp->setTitle(QApplication::translate("NetWindowClass", "\345\270\256\345\212\251", nullptr));
        menu->setTitle(QApplication::translate("NetWindowClass", "\347\274\226\350\276\221", nullptr));
        menu_2->setTitle(QApplication::translate("NetWindowClass", "\347\252\227\345\217\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetWindowClass: public Ui_NetWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWINDOW_H
