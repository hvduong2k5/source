/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(599, 392);
        LoginWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::Box);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame->setLineWidth(5);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(1677215, 200));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka Text Semibold")});
        font.setPointSize(20);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setTextFormat(Qt::TextFormat::AutoText);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setMaximumSize(QSize(200, 80));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setStyleStrategy(QFont::PreferAntialias);
        label_5->setFont(font1);

        horizontalLayout_3->addWidget(label_5);

        lineEdit_4 = new QLineEdit(frame);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setMinimumSize(QSize(300, 50));
        lineEdit_4->setMaximumSize(QSize(500, 80));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Cascadia Code")});
        font2.setPointSize(18);
        lineEdit_4->setFont(font2);

        horizontalLayout_3->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setMaximumSize(QSize(200, 80));
        label_4->setFont(font1);

        horizontalLayout_4->addWidget(label_4);

        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(300, 50));
        lineEdit->setMaximumSize(QSize(500, 80));
        lineEdit->setFont(font2);

        horizontalLayout_4->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMaximumSize(QSize(400, 100));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Lucida Sans")});
        font3.setPointSize(18);
        pushButton_2->setFont(font3);
        pushButton_2->setCursor(QCursor(Qt::CursorShape::OpenHandCursor));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(200, 50));
        pushButton->setMaximumSize(QSize(300, 100));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Lucida Sans")});
        font4.setPointSize(18);
        font4.setItalic(true);
        pushButton->setFont(font4);
        pushButton->setCursor(QCursor(Qt::CursorShape::OpenHandCursor));
        pushButton->setAutoFillBackground(false);
        pushButton->setAutoDefault(false);
        pushButton->setFlat(false);

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setMaximumSize(QSize(500, 100));
        QFont font5;
        font5.setPointSize(16);
        font5.setStyleStrategy(QFont::PreferAntialias);
        font5.setHintingPreference(QFont::PreferFullHinting);
        label->setFont(font5);
        label->setFrameShape(QFrame::Shape::NoFrame);
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(label);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(300, 50));
        pushButton_3->setMaximumSize(QSize(500, 100));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Bahnschrift")});
        font6.setPointSize(16);
        pushButton_3->setFont(font6);
        pushButton_3->setCursor(QCursor(Qt::CursorShape::OpenHandCursor));
        pushButton_3->setIconSize(QSize(10, 20));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(frame);

        LoginWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 599, 30));
        LoginWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginWindow);
        statusbar->setObjectName("statusbar");
        LoginWindow->setStatusBar(statusbar);

        retranslateUi(LoginWindow);

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("LoginWindow", "\304\220\304\203ng nh\341\272\255p", nullptr));
        label_5->setText(QCoreApplication::translate("LoginWindow", "T\303\240i kho\341\272\243n", nullptr));
        lineEdit_4->setText(QString());
        lineEdit_4->setPlaceholderText(QCoreApplication::translate("LoginWindow", "nh\341\272\255p t\303\240i kho\341\272\243n", nullptr));
        label_4->setText(QCoreApplication::translate("LoginWindow", "M\341\272\255t kh\341\272\251u", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("LoginWindow", "nh\341\272\255p m\341\272\255t kh\341\272\251u", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LoginWindow", "Qu\303\252n m\341\272\255t kh\341\272\251u", nullptr));
        pushButton->setText(QCoreApplication::translate("LoginWindow", "\304\220\304\203ng nh\341\272\255p", nullptr));
        label->setText(QCoreApplication::translate("LoginWindow", "Ch\306\260a c\303\263 t\303\240i kho\341\272\243n?", nullptr));
        pushButton_3->setText(QCoreApplication::translate("LoginWindow", "\304\220\304\203ng k\303\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
