/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *checkImage;
    QPlainTextEdit *amountBox;
    QPlainTextEdit *dateBox;
    QPlainTextEdit *memoBox;
    QLabel *tutorialText;
    QTextEdit *writtenAmountBox;
    QTextEdit *recipientBox;
    QPushButton *continueButton;
    QPlainTextEdit *signatureBox;
    QMenuBar *menuBar;
    QMenu *menuCheck_Tutorial;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(765, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        checkImage = new QLabel(centralWidget);
        checkImage->setObjectName(QStringLiteral("checkImage"));
        checkImage->setEnabled(true);
        checkImage->setGeometry(QRect(40, 30, 671, 341));
        checkImage->setAutoFillBackground(false);
        checkImage->setPixmap(QPixmap(QString::fromUtf8("check.gif")));
        checkImage->setScaledContents(true);
        amountBox = new QPlainTextEdit(centralWidget);
        amountBox->setObjectName(QStringLiteral("amountBox"));
        amountBox->setGeometry(QRect(580, 150, 111, 31));
        QFont font;
        font.setPointSize(12);
        amountBox->setFont(font);
        amountBox->setLineWidth(7);
        dateBox = new QPlainTextEdit(centralWidget);
        dateBox->setObjectName(QStringLiteral("dateBox"));
        dateBox->setEnabled(true);
        dateBox->setGeometry(QRect(470, 70, 121, 31));
        dateBox->setFont(font);
        dateBox->setFrameShadow(QFrame::Raised);
        dateBox->setLineWidth(20);
        memoBox = new QPlainTextEdit(centralWidget);
        memoBox->setObjectName(QStringLiteral("memoBox"));
        memoBox->setGeometry(QRect(120, 300, 211, 31));
        memoBox->setFont(font);
        tutorialText = new QLabel(centralWidget);
        tutorialText->setObjectName(QStringLiteral("tutorialText"));
        tutorialText->setGeometry(QRect(130, 460, 581, 81));
        tutorialText->setFont(font);
        tutorialText->setTextFormat(Qt::RichText);
        tutorialText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        tutorialText->setWordWrap(true);
        writtenAmountBox = new QTextEdit(centralWidget);
        writtenAmountBox->setObjectName(QStringLiteral("writtenAmountBox"));
        writtenAmountBox->setGeometry(QRect(150, 200, 361, 31));
        writtenAmountBox->setFont(font);
        recipientBox = new QTextEdit(centralWidget);
        recipientBox->setObjectName(QStringLiteral("recipientBox"));
        recipientBox->setGeometry(QRect(150, 150, 361, 31));
        recipientBox->setFont(font);
        continueButton = new QPushButton(centralWidget);
        continueButton->setObjectName(QStringLiteral("continueButton"));
        continueButton->setEnabled(true);
        continueButton->setGeometry(QRect(280, 390, 181, 41));
        signatureBox = new QPlainTextEdit(centralWidget);
        signatureBox->setObjectName(QStringLiteral("signatureBox"));
        signatureBox->setGeometry(QRect(380, 300, 291, 31));
        signatureBox->setFont(font);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 765, 21));
        menuCheck_Tutorial = new QMenu(menuBar);
        menuCheck_Tutorial->setObjectName(QStringLiteral("menuCheck_Tutorial"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuCheck_Tutorial->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        checkImage->setText(QString());
        amountBox->setPlainText(QString());
        tutorialText->setText(QApplication::translate("MainWindow", "The text for the tutorial will be displayed here. We can change this in the future, but it's a good starting point before we make better graphics.", 0));
        continueButton->setText(QApplication::translate("MainWindow", "Continue", 0));
        menuCheck_Tutorial->setTitle(QApplication::translate("MainWindow", "Check Tutorial!", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
