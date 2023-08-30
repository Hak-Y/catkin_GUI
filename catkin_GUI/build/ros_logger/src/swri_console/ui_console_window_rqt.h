/********************************************************************************
** Form generated from reading UI file 'console_window_rqt_re.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLE_WINDOW_RQT_RE_H
#define UI_CONSOLE_WINDOW_RQT_RE_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConsoleWindow
{
public:
    QAction *action_Quit;
    QAction *action_NewWindow;
    QAction *action_Copy;
    QAction *action_SelectAll;
    QAction *action_ReadBagFile;
    QAction *action_SaveLogs;
    QAction *action_AbsoluteTimestamps;
    QAction *action_ShowTimestamps;
    QAction *action_ColorizeLogs;
    QAction *action_SelectFont;
    QAction *action_RegularExpressions;
    QAction *action_CopyExtended;
    QAction *action_ReadLogFile;
    QAction *action_ReadLogDirectory;
    QWidget *centralwidget;
    QSplitter *splitter;
    QListView *nodeList;
    QListView *messageList;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *debugOptionLayout;
    QCheckBox *checkDebug;
    QPushButton *debugColorWidget;
    QHBoxLayout *infoOptionLayout;
    QCheckBox *checkInfo;
    QPushButton *infoColorWidget;
    QHBoxLayout *warnOptionLayout;
    QCheckBox *checkWarn;
    QPushButton *warnColorWidget;
    QHBoxLayout *errorOptionLayout;
    QCheckBox *checkError;
    QPushButton *errorColorWidget;
    QHBoxLayout *fatalOptionLayout;
    QCheckBox *checkFatal;
    QPushButton *fatalColorWidget;
    QPushButton *clearAllButton;
    QPushButton *clearMessagesButton;
    QCheckBox *checkFollowNewest;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *excludeLabel;
    QLineEdit *excludeText;
    QLabel *includeLabel;
    QLineEdit *includeText;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_7;
    QPushButton *runRqtButton;
    QPushButton *runQgcButton;
    QPushButton *runVideoButton;
    QLabel *label_10;
    QLineEdit *searchText;
    QPushButton *pushPrev;
    QPushButton *pushNext;
    QLabel *label_11;
    QPushButton *runtakeoff;
    QPushButton *runLanding;
    QPushButton *runARM;
    QPushButton *runDisarm;
    QPushButton *runInit;
    QPushButton *runStop;
    QLabel *label_2;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menu_Edit;
    QMenu *menuOptions;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ConsoleWindow)
    {
        if (ConsoleWindow->objectName().isEmpty())
            ConsoleWindow->setObjectName(QString::fromUtf8("ConsoleWindow"));
        ConsoleWindow->setEnabled(true);
        ConsoleWindow->resize(1116, 774);
        ConsoleWindow->setMaximumSize(QSize(1116, 774));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/Selection_016.png"), QSize(), QIcon::Normal, QIcon::Off);
        ConsoleWindow->setWindowIcon(icon);
        ConsoleWindow->setLocale(QLocale(QLocale::English, QLocale::Australia));
        action_Quit = new QAction(ConsoleWindow);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_NewWindow = new QAction(ConsoleWindow);
        action_NewWindow->setObjectName(QString::fromUtf8("action_NewWindow"));
        action_Copy = new QAction(ConsoleWindow);
        action_Copy->setObjectName(QString::fromUtf8("action_Copy"));
        action_SelectAll = new QAction(ConsoleWindow);
        action_SelectAll->setObjectName(QString::fromUtf8("action_SelectAll"));
        action_ReadBagFile = new QAction(ConsoleWindow);
        action_ReadBagFile->setObjectName(QString::fromUtf8("action_ReadBagFile"));
        action_SaveLogs = new QAction(ConsoleWindow);
        action_SaveLogs->setObjectName(QString::fromUtf8("action_SaveLogs"));
        action_AbsoluteTimestamps = new QAction(ConsoleWindow);
        action_AbsoluteTimestamps->setObjectName(QString::fromUtf8("action_AbsoluteTimestamps"));
        action_AbsoluteTimestamps->setCheckable(true);
        action_ShowTimestamps = new QAction(ConsoleWindow);
        action_ShowTimestamps->setObjectName(QString::fromUtf8("action_ShowTimestamps"));
        action_ShowTimestamps->setCheckable(true);
        action_ShowTimestamps->setChecked(true);
        action_ColorizeLogs = new QAction(ConsoleWindow);
        action_ColorizeLogs->setObjectName(QString::fromUtf8("action_ColorizeLogs"));
        action_ColorizeLogs->setCheckable(true);
        action_ColorizeLogs->setChecked(true);
        action_SelectFont = new QAction(ConsoleWindow);
        action_SelectFont->setObjectName(QString::fromUtf8("action_SelectFont"));
        action_RegularExpressions = new QAction(ConsoleWindow);
        action_RegularExpressions->setObjectName(QString::fromUtf8("action_RegularExpressions"));
        action_RegularExpressions->setCheckable(true);
        action_RegularExpressions->setChecked(false);
        action_CopyExtended = new QAction(ConsoleWindow);
        action_CopyExtended->setObjectName(QString::fromUtf8("action_CopyExtended"));
        action_ReadLogFile = new QAction(ConsoleWindow);
        action_ReadLogFile->setObjectName(QString::fromUtf8("action_ReadLogFile"));
        action_ReadLogDirectory = new QAction(ConsoleWindow);
        action_ReadLogDirectory->setObjectName(QString::fromUtf8("action_ReadLogDirectory"));
        centralwidget = new QWidget(ConsoleWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(10, 140, 271, 501));
        splitter->setOrientation(Qt::Horizontal);
        nodeList = new QListView(splitter);
        nodeList->setObjectName(QString::fromUtf8("nodeList"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nodeList->sizePolicy().hasHeightForWidth());
        nodeList->setSizePolicy(sizePolicy);
        nodeList->setSelectionMode(QAbstractItemView::ExtendedSelection);
        splitter->addWidget(nodeList);
        messageList = new QListView(centralwidget);
        messageList->setObjectName(QString::fromUtf8("messageList"));
        messageList->setGeometry(QRect(640, 130, 471, 581));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(3);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(messageList->sizePolicy().hasHeightForWidth());
        messageList->setSizePolicy(sizePolicy1);
        messageList->setContextMenuPolicy(Qt::CustomContextMenu);
        messageList->setStyleSheet(QString::fromUtf8(""));
        messageList->setSelectionMode(QAbstractItemView::ExtendedSelection);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(290, 120, 341, 215));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy2);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        groupBox->setFont(font);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        debugOptionLayout = new QHBoxLayout();
        debugOptionLayout->setObjectName(QString::fromUtf8("debugOptionLayout"));
        checkDebug = new QCheckBox(groupBox);
        checkDebug->setObjectName(QString::fromUtf8("checkDebug"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(2);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(checkDebug->sizePolicy().hasHeightForWidth());
        checkDebug->setSizePolicy(sizePolicy3);
        checkDebug->setChecked(true);

        debugOptionLayout->addWidget(checkDebug);

        debugColorWidget = new QPushButton(groupBox);
        debugColorWidget->setObjectName(QString::fromUtf8("debugColorWidget"));

        debugOptionLayout->addWidget(debugColorWidget);


        verticalLayout->addLayout(debugOptionLayout);

        infoOptionLayout = new QHBoxLayout();
        infoOptionLayout->setObjectName(QString::fromUtf8("infoOptionLayout"));
        checkInfo = new QCheckBox(groupBox);
        checkInfo->setObjectName(QString::fromUtf8("checkInfo"));
        sizePolicy3.setHeightForWidth(checkInfo->sizePolicy().hasHeightForWidth());
        checkInfo->setSizePolicy(sizePolicy3);
        checkInfo->setChecked(true);

        infoOptionLayout->addWidget(checkInfo);

        infoColorWidget = new QPushButton(groupBox);
        infoColorWidget->setObjectName(QString::fromUtf8("infoColorWidget"));

        infoOptionLayout->addWidget(infoColorWidget);


        verticalLayout->addLayout(infoOptionLayout);

        warnOptionLayout = new QHBoxLayout();
        warnOptionLayout->setObjectName(QString::fromUtf8("warnOptionLayout"));
        checkWarn = new QCheckBox(groupBox);
        checkWarn->setObjectName(QString::fromUtf8("checkWarn"));
        sizePolicy3.setHeightForWidth(checkWarn->sizePolicy().hasHeightForWidth());
        checkWarn->setSizePolicy(sizePolicy3);
        checkWarn->setChecked(true);

        warnOptionLayout->addWidget(checkWarn);

        warnColorWidget = new QPushButton(groupBox);
        warnColorWidget->setObjectName(QString::fromUtf8("warnColorWidget"));

        warnOptionLayout->addWidget(warnColorWidget);


        verticalLayout->addLayout(warnOptionLayout);

        errorOptionLayout = new QHBoxLayout();
        errorOptionLayout->setObjectName(QString::fromUtf8("errorOptionLayout"));
        checkError = new QCheckBox(groupBox);
        checkError->setObjectName(QString::fromUtf8("checkError"));
        sizePolicy3.setHeightForWidth(checkError->sizePolicy().hasHeightForWidth());
        checkError->setSizePolicy(sizePolicy3);
        checkError->setChecked(true);

        errorOptionLayout->addWidget(checkError);

        errorColorWidget = new QPushButton(groupBox);
        errorColorWidget->setObjectName(QString::fromUtf8("errorColorWidget"));

        errorOptionLayout->addWidget(errorColorWidget);


        verticalLayout->addLayout(errorOptionLayout);

        fatalOptionLayout = new QHBoxLayout();
        fatalOptionLayout->setObjectName(QString::fromUtf8("fatalOptionLayout"));
        checkFatal = new QCheckBox(groupBox);
        checkFatal->setObjectName(QString::fromUtf8("checkFatal"));
        sizePolicy3.setHeightForWidth(checkFatal->sizePolicy().hasHeightForWidth());
        checkFatal->setSizePolicy(sizePolicy3);
        checkFatal->setMaximumSize(QSize(1116, 774));
        checkFatal->setChecked(true);

        fatalOptionLayout->addWidget(checkFatal);

        fatalColorWidget = new QPushButton(groupBox);
        fatalColorWidget->setObjectName(QString::fromUtf8("fatalColorWidget"));

        fatalOptionLayout->addWidget(fatalColorWidget);


        verticalLayout->addLayout(fatalOptionLayout);

        clearAllButton = new QPushButton(centralwidget);
        clearAllButton->setObjectName(QString::fromUtf8("clearAllButton"));
        clearAllButton->setGeometry(QRect(10, 650, 114, 27));
        clearMessagesButton = new QPushButton(centralwidget);
        clearMessagesButton->setObjectName(QString::fromUtf8("clearMessagesButton"));
        clearMessagesButton->setGeometry(QRect(130, 650, 151, 27));
        checkFollowNewest = new QCheckBox(centralwidget);
        checkFollowNewest->setObjectName(QString::fromUtf8("checkFollowNewest"));
        checkFollowNewest->setGeometry(QRect(20, 680, 241, 25));
        checkFollowNewest->setChecked(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(288, 452, 63, 41));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(288, 382, 341, 101));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        excludeLabel = new QLabel(centralwidget);
        excludeLabel->setObjectName(QString::fromUtf8("excludeLabel"));
        excludeLabel->setGeometry(QRect(288, 422, 63, 27));
        excludeText = new QLineEdit(centralwidget);
        excludeText->setObjectName(QString::fromUtf8("excludeText"));
        excludeText->setGeometry(QRect(368, 422, 260, 27));
        includeLabel = new QLabel(centralwidget);
        includeLabel->setObjectName(QString::fromUtf8("includeLabel"));
        includeLabel->setGeometry(QRect(288, 392, 59, 27));
        includeText = new QLineEdit(centralwidget);
        includeText->setObjectName(QString::fromUtf8("includeText"));
        includeText->setGeometry(QRect(368, 392, 261, 27));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(990, 30, 111, 61));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/UNIST.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(560, 20, 321, 41));
        QFont font1;
        font1.setPointSize(18);
        font1.setItalic(true);
        label_4->setFont(font1);
        label_4->setScaledContents(false);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(250, 30, 521, 41));
        QFont font2;
        font2.setPointSize(23);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        label_5->setFont(font2);
        label_5->setScaledContents(false);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(60, 100, 211, 41));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        label_6->setFont(font3);
        label_6->setScaledContents(false);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(820, 100, 141, 41));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setItalic(true);
        font4.setWeight(75);
        label_8->setFont(font4);
        label_8->setScaledContents(false);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(370, 340, 211, 41));
        label_9->setFont(font3);
        label_9->setScaledContents(false);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(380, 110, 171, 19));
        label_7->setFont(font3);
        label_7->setScaledContents(false);
        runRqtButton = new QPushButton(centralwidget);
        runRqtButton->setObjectName(QString::fromUtf8("runRqtButton"));
        runRqtButton->setGeometry(QRect(530, 540, 89, 41));
        runQgcButton = new QPushButton(centralwidget);
        runQgcButton->setObjectName(QString::fromUtf8("runQgcButton"));
        runQgcButton->setGeometry(QRect(410, 540, 89, 41));
        runVideoButton = new QPushButton(centralwidget);
        runVideoButton->setObjectName(QString::fromUtf8("runVideoButton"));
        runVideoButton->setGeometry(QRect(300, 540, 89, 41));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(380, 490, 211, 41));
        label_10->setFont(font3);
        label_10->setScaledContents(false);
        searchText = new QLineEdit(centralwidget);
        searchText->setObjectName(QString::fromUtf8("searchText"));
        searchText->setGeometry(QRect(367, 460, 87, 25));
        pushPrev = new QPushButton(centralwidget);
        pushPrev->setObjectName(QString::fromUtf8("pushPrev"));
        pushPrev->setGeometry(QRect(546, 460, 80, 25));
        pushNext = new QPushButton(centralwidget);
        pushNext->setObjectName(QString::fromUtf8("pushNext"));
        pushNext->setGeometry(QRect(460, 460, 80, 25));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(380, 590, 211, 41));
        label_11->setFont(font3);
        label_11->setScaledContents(false);
        runtakeoff = new QPushButton(centralwidget);
        runtakeoff->setObjectName(QString::fromUtf8("runtakeoff"));
        runtakeoff->setGeometry(QRect(400, 640, 89, 25));
        runLanding = new QPushButton(centralwidget);
        runLanding->setObjectName(QString::fromUtf8("runLanding"));
        runLanding->setGeometry(QRect(400, 680, 89, 25));
        runARM = new QPushButton(centralwidget);
        runARM->setObjectName(QString::fromUtf8("runARM"));
        runARM->setGeometry(QRect(300, 640, 89, 25));
        runDisarm = new QPushButton(centralwidget);
        runDisarm->setObjectName(QString::fromUtf8("runDisarm"));
        runDisarm->setGeometry(QRect(300, 680, 89, 25));
        runInit = new QPushButton(centralwidget);
        runInit->setObjectName(QString::fromUtf8("runInit"));
        runInit->setGeometry(QRect(500, 640, 131, 25));
        runInit->setStyleSheet(QString::fromUtf8("background-color:rgb(52, 101, 164);"));
        runStop = new QPushButton(centralwidget);
        runStop->setObjectName(QString::fromUtf8("runStop"));
        runStop->setGeometry(QRect(500, 680, 131, 25));
        runStop->setStyleSheet(QString::fromUtf8("background-color:rgb(204, 0, 0)"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 10, 101, 101));
        ConsoleWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ConsoleWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1116, 22));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_Edit = new QMenu(menubar);
        menu_Edit->setObjectName(QString::fromUtf8("menu_Edit"));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        ConsoleWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ConsoleWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ConsoleWindow->setStatusBar(statusbar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Edit->menuAction());
        menubar->addAction(menuOptions->menuAction());
        menu_File->addAction(action_NewWindow);
        menu_File->addAction(action_ReadBagFile);
        menu_File->addAction(action_ReadLogFile);
        menu_File->addAction(action_ReadLogDirectory);
        menu_File->addAction(action_SaveLogs);
        menu_File->addSeparator();
        menu_File->addAction(action_Quit);
        menu_Edit->addAction(action_Copy);
        menu_Edit->addAction(action_CopyExtended);
        menu_Edit->addAction(action_SelectAll);
        menuOptions->addAction(action_ShowTimestamps);
        menuOptions->addAction(action_AbsoluteTimestamps);
        menuOptions->addAction(action_RegularExpressions);
        menuOptions->addAction(action_ColorizeLogs);
        menuOptions->addAction(action_SelectFont);

        retranslateUi(ConsoleWindow);
        QObject::connect(action_Quit, SIGNAL(triggered()), ConsoleWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(ConsoleWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ConsoleWindow)
    {
        ConsoleWindow->setWindowTitle(QApplication::translate("ConsoleWindow", "Monitoring System", nullptr));
        action_Quit->setText(QApplication::translate("ConsoleWindow", "&Quit", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Quit->setShortcut(QApplication::translate("ConsoleWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        action_NewWindow->setText(QApplication::translate("ConsoleWindow", "&New Window", nullptr));
#ifndef QT_NO_SHORTCUT
        action_NewWindow->setShortcut(QApplication::translate("ConsoleWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        action_Copy->setText(QApplication::translate("ConsoleWindow", "&Copy", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Copy->setShortcut(QApplication::translate("ConsoleWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        action_SelectAll->setText(QApplication::translate("ConsoleWindow", "Select &All", nullptr));
#ifndef QT_NO_SHORTCUT
        action_SelectAll->setShortcut(QApplication::translate("ConsoleWindow", "Ctrl+A", nullptr));
#endif // QT_NO_SHORTCUT
        action_ReadBagFile->setText(QApplication::translate("ConsoleWindow", "&Read Bag File...", nullptr));
#ifndef QT_NO_SHORTCUT
        action_ReadBagFile->setShortcut(QApplication::translate("ConsoleWindow", "Ctrl+R", nullptr));
#endif // QT_NO_SHORTCUT
        action_SaveLogs->setText(QApplication::translate("ConsoleWindow", "&Save Logs...", nullptr));
#ifndef QT_NO_SHORTCUT
        action_SaveLogs->setShortcut(QApplication::translate("ConsoleWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        action_AbsoluteTimestamps->setText(QApplication::translate("ConsoleWindow", "&Absolute Timestamps", nullptr));
#ifndef QT_NO_TOOLTIP
        action_AbsoluteTimestamps->setToolTip(QApplication::translate("ConsoleWindow", "Absolute Timestamps", nullptr));
#endif // QT_NO_TOOLTIP
        action_ShowTimestamps->setText(QApplication::translate("ConsoleWindow", "&Show Timestamps", nullptr));
        action_ColorizeLogs->setText(QApplication::translate("ConsoleWindow", "&Colorize Logs", nullptr));
        action_SelectFont->setText(QApplication::translate("ConsoleWindow", "Select &Font...", nullptr));
        action_RegularExpressions->setText(QApplication::translate("ConsoleWindow", "Allow &regular expressions in Include/Exclude", nullptr));
        action_CopyExtended->setText(QApplication::translate("ConsoleWindow", "Copy &Extended", nullptr));
#ifndef QT_NO_TOOLTIP
        action_CopyExtended->setToolTip(QApplication::translate("ConsoleWindow", "Copy Extended Log", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        action_CopyExtended->setShortcut(QApplication::translate("ConsoleWindow", "Ctrl+E", nullptr));
#endif // QT_NO_SHORTCUT
        action_ReadLogFile->setText(QApplication::translate("ConsoleWindow", "Read &Log File...", nullptr));
#ifndef QT_NO_TOOLTIP
        action_ReadLogFile->setToolTip(QApplication::translate("ConsoleWindow", "Read a rosout.log file", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        action_ReadLogFile->setShortcut(QApplication::translate("ConsoleWindow", "Ctrl+L", nullptr));
#endif // QT_NO_SHORTCUT
        action_ReadLogDirectory->setText(QApplication::translate("ConsoleWindow", "Read Log &Directory...", nullptr));
#ifndef QT_NO_TOOLTIP
        action_ReadLogDirectory->setToolTip(QApplication::translate("ConsoleWindow", "Read Log Directory", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        action_ReadLogDirectory->setShortcut(QApplication::translate("ConsoleWindow", "Ctrl+D, Return", nullptr));
#endif // QT_NO_SHORTCUT
        groupBox->setTitle(QString());
        checkDebug->setText(QApplication::translate("ConsoleWindow", "Debug", nullptr));
        checkInfo->setText(QApplication::translate("ConsoleWindow", "Info", nullptr));
        checkWarn->setText(QApplication::translate("ConsoleWindow", "Warn", nullptr));
        checkError->setText(QApplication::translate("ConsoleWindow", "Error", nullptr));
        checkFatal->setText(QApplication::translate("ConsoleWindow", "Fatal ", nullptr));
        clearAllButton->setText(QApplication::translate("ConsoleWindow", "Clear All", nullptr));
        clearMessagesButton->setText(QApplication::translate("ConsoleWindow", "Clear Messages", nullptr));
        checkFollowNewest->setText(QApplication::translate("ConsoleWindow", "Follow Newest Messages", nullptr));
        label->setText(QApplication::translate("ConsoleWindow", "Search", nullptr));
        excludeLabel->setText(QApplication::translate("ConsoleWindow", "Exclude", nullptr));
#ifndef QT_NO_TOOLTIP
        excludeText->setToolTip(QApplication::translate("ConsoleWindow", "Filter for messages that don't include substrings. Separate substrings with a semicolon.", nullptr));
#endif // QT_NO_TOOLTIP
        includeLabel->setText(QApplication::translate("ConsoleWindow", "Include", nullptr));
#ifndef QT_NO_TOOLTIP
        includeText->setToolTip(QApplication::translate("ConsoleWindow", "Filter for messages that include substrings. Separate substrings with a semicolon.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        includeText->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QApplication::translate("ConsoleWindow", "\355\225\234\352\265\255 \353\241\234\353\264\207\355\225\255\352\263\265\352\270\260 \352\262\275\354\227\260\353\214\200\355\232\214 HMCL GCS", nullptr));
        label_6->setText(QApplication::translate("ConsoleWindow", "< Activated Fuctions >", nullptr));
        label_8->setText(QApplication::translate("ConsoleWindow", "< Log Viewer >", nullptr));
        label_9->setText(QApplication::translate("ConsoleWindow", "< Monitoring Options >", nullptr));
        label_7->setText(QApplication::translate("ConsoleWindow", "< Severity Level >", nullptr));
        runRqtButton->setText(QApplication::translate("ConsoleWindow", "run Rviz", nullptr));
        runQgcButton->setText(QApplication::translate("ConsoleWindow", "run QGC", nullptr));
        runVideoButton->setText(QApplication::translate("ConsoleWindow", "run Video", nullptr));
        label_10->setText(QApplication::translate("ConsoleWindow", "< Add-On Programs >", nullptr));
        pushPrev->setText(QApplication::translate("ConsoleWindow", "Previous", nullptr));
        pushNext->setText(QApplication::translate("ConsoleWindow", "Next", nullptr));
        label_11->setText(QApplication::translate("ConsoleWindow", "< Shortcut Commands >", nullptr));
        runtakeoff->setText(QApplication::translate("ConsoleWindow", "Take-off", nullptr));
        runLanding->setText(QApplication::translate("ConsoleWindow", "Landing", nullptr));
        runARM->setText(QApplication::translate("ConsoleWindow", "Arm", nullptr));
        runDisarm->setText(QApplication::translate("ConsoleWindow", "Disarm", nullptr));
        runInit->setText(QApplication::translate("ConsoleWindow", "System Initialize", nullptr));
        runStop->setText(QApplication::translate("ConsoleWindow", "Emergency Stop", nullptr));
        label_2->setText(QApplication::translate("ConsoleWindow", "<html><head/><body><p><img src=\":/images/Selection_016.png\"/></p></body></html>", nullptr));
        menu_File->setTitle(QApplication::translate("ConsoleWindow", "&File", nullptr));
        menu_Edit->setTitle(QApplication::translate("ConsoleWindow", "&Edit", nullptr));
        menuOptions->setTitle(QApplication::translate("ConsoleWindow", "Optio&ns", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConsoleWindow: public Ui_ConsoleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLE_WINDOW_RQT_RE_H
