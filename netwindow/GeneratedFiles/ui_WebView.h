/********************************************************************************
** Form generated from reading UI file 'WebView.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEBVIEW_H
#define UI_WEBVIEW_H

#include <QtCore/QVariant>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WebViewForm
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnBack;
    QPushButton *btnForward;
    QLabel *label;
    QComboBox *listHistory;
    QPushButton *btnGo;
    QPushButton *btnStop;
    QPushButton *btnFresh;
    QPushButton *btnFindPanel;
    QHBoxLayout *horizontalLayout_5;
    QLabel *searchLabel;
    QLineEdit *textLine;
    QPushButton *btnFind;
    QWebEngineView *webEngineView;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QLabel *textStatus;
    QProgressBar *barLoader;

    void setupUi(QWidget *WebViewForm)
    {
        if (WebViewForm->objectName().isEmpty())
            WebViewForm->setObjectName(QStringLiteral("WebViewForm"));
        WebViewForm->resize(800, 526);
        WebViewForm->setMaximumSize(QSize(1280, 16777215));
        verticalLayoutWidget = new QWidget(WebViewForm);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 811, 521));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(6, 2, 6, -1);
        btnBack = new QPushButton(verticalLayoutWidget);
        btnBack->setObjectName(QStringLiteral("btnBack"));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei"));
        font.setPointSize(10);
        btnBack->setFont(font);

        horizontalLayout->addWidget(btnBack);

        btnForward = new QPushButton(verticalLayoutWidget);
        btnForward->setObjectName(QStringLiteral("btnForward"));
        btnForward->setFont(font);

        horizontalLayout->addWidget(btnForward);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        listHistory = new QComboBox(verticalLayoutWidget);
        listHistory->setObjectName(QStringLiteral("listHistory"));
        listHistory->setFont(font);
        listHistory->setCursor(QCursor(Qt::ArrowCursor));
        listHistory->setEditable(true);
        listHistory->setInsertPolicy(QComboBox::InsertAtTop);
        listHistory->setFrame(true);

        horizontalLayout->addWidget(listHistory);

        btnGo = new QPushButton(verticalLayoutWidget);
        btnGo->setObjectName(QStringLiteral("btnGo"));
        btnGo->setMaximumSize(QSize(80, 16777215));
        btnGo->setFont(font);

        horizontalLayout->addWidget(btnGo);

        btnStop = new QPushButton(verticalLayoutWidget);
        btnStop->setObjectName(QStringLiteral("btnStop"));
        btnStop->setFont(font);

        horizontalLayout->addWidget(btnStop);

        btnFresh = new QPushButton(verticalLayoutWidget);
        btnFresh->setObjectName(QStringLiteral("btnFresh"));
        btnFresh->setFont(font);

        horizontalLayout->addWidget(btnFresh);

        btnFindPanel = new QPushButton(verticalLayoutWidget);
        btnFindPanel->setObjectName(QStringLiteral("btnFindPanel"));
        btnFindPanel->setFont(font);

        horizontalLayout->addWidget(btnFindPanel);

        horizontalLayout->setStretch(3, 12);
        horizontalLayout->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        searchLabel = new QLabel(verticalLayoutWidget);
        searchLabel->setObjectName(QStringLiteral("searchLabel"));
        searchLabel->setFont(font);

        horizontalLayout_5->addWidget(searchLabel);

        textLine = new QLineEdit(verticalLayoutWidget);
        textLine->setObjectName(QStringLiteral("textLine"));
        textLine->setFont(font);

        horizontalLayout_5->addWidget(textLine);

        btnFind = new QPushButton(verticalLayoutWidget);
        btnFind->setObjectName(QStringLiteral("btnFind"));
        btnFind->setFont(font);

        horizontalLayout_5->addWidget(btnFind);


        verticalLayout->addLayout(horizontalLayout_5);

        webEngineView = new QWebEngineView(verticalLayoutWidget);
        webEngineView->setObjectName(QStringLiteral("webEngineView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(webEngineView->sizePolicy().hasHeightForWidth());
        webEngineView->setSizePolicy(sizePolicy);
        webEngineView->setFont(font);
        webEngineView->setUrl(QUrl(QStringLiteral("about:blank")));

        verticalLayout->addWidget(webEngineView);

        line = new QFrame(verticalLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        textStatus = new QLabel(verticalLayoutWidget);
        textStatus->setObjectName(QStringLiteral("textStatus"));
        textStatus->setFont(font);

        horizontalLayout_2->addWidget(textStatus);

        barLoader = new QProgressBar(verticalLayoutWidget);
        barLoader->setObjectName(QStringLiteral("barLoader"));
        QFont font1;
        font1.setFamily(QStringLiteral("Microsoft YaHei"));
        font1.setPointSize(9);
        barLoader->setFont(font1);
        barLoader->setValue(0);
        barLoader->setTextVisible(false);

        horizontalLayout_2->addWidget(barLoader);

        horizontalLayout_2->setStretch(0, 8);

        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(WebViewForm);

        QMetaObject::connectSlotsByName(WebViewForm);
    } // setupUi

    void retranslateUi(QWidget *WebViewForm)
    {
        WebViewForm->setWindowTitle(QApplication::translate("WebViewForm", "Form", nullptr));
        btnBack->setText(QApplication::translate("WebViewForm", "\345\220\216\351\200\200", nullptr));
        btnForward->setText(QApplication::translate("WebViewForm", "\345\211\215\350\277\233", nullptr));
        label->setText(QApplication::translate("WebViewForm", "\350\276\223\345\205\245\347\275\221\345\235\200", nullptr));
        btnGo->setText(QApplication::translate("WebViewForm", "\346\265\217\350\247\210", nullptr));
        btnStop->setText(QApplication::translate("WebViewForm", "\345\201\234\346\255\242", nullptr));
        btnFresh->setText(QApplication::translate("WebViewForm", "\345\210\267\346\226\260", nullptr));
        btnFindPanel->setText(QApplication::translate("WebViewForm", "\346\220\234\346\220\234", nullptr));
        searchLabel->setText(QApplication::translate("WebViewForm", "\346\220\234\347\264\242\345\206\205\345\256\271", nullptr));
        btnFind->setText(QApplication::translate("WebViewForm", "\346\237\245\346\211\276", nullptr));
        textStatus->setText(QApplication::translate("WebViewForm", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WebViewForm: public Ui_WebViewForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEBVIEW_H
