/********************************************************************************
** Form generated from reading UI file 'newwindowl.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWWINDOWL_H
#define UI_NEWWINDOWL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newWindowl
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;

    void setupUi(QWidget *newWindowl)
    {
        if (newWindowl->objectName().isEmpty())
            newWindowl->setObjectName("newWindowl");
        newWindowl->resize(400, 172);
        verticalLayout = new QVBoxLayout(newWindowl);
        verticalLayout->setObjectName("verticalLayout");
        textBrowser = new QTextBrowser(newWindowl);
        textBrowser->setObjectName("textBrowser");

        verticalLayout->addWidget(textBrowser);

        pushButton = new QPushButton(newWindowl);
        pushButton->setObjectName("pushButton");
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        pushButton->setFont(font);

        verticalLayout->addWidget(pushButton);


        retranslateUi(newWindowl);

        QMetaObject::connectSlotsByName(newWindowl);
    } // setupUi

    void retranslateUi(QWidget *newWindowl)
    {
        newWindowl->setWindowTitle(QCoreApplication::translate("newWindowl", "Form", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("newWindowl", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">\345\274\200\345\217\221\344\272\272\345\221\230\344\277\241\346\201\257\357\274\232\344\275\225\347\275\227\351\223\255</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">2022414040213</span></p></body></html"
                        ">", nullptr));
        pushButton->setText(QCoreApplication::translate("newWindowl", "ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newWindowl: public Ui_newWindowl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWWINDOWL_H
