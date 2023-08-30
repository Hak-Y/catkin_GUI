/********************************************************************************
** Form generated from reading UI file 'console_window_rqt.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLE_WINDOW_RQT_H
#define UI_CONSOLE_WINDOW_RQT_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
    QLabel *label_2;
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
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menu_Edit;
    QMenu *menuOptions;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ConsoleWindow)
    {
        if (ConsoleWindow->objectName().isEmpty())
            ConsoleWindow->setObjectName(QStringLiteral("ConsoleWindow"));
        ConsoleWindow->setEnabled(true);
        ConsoleWindow->resize(1116, 774);
        ConsoleWindow->setMaximumSize(QSize(1116, 774));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/selection_016.png"), QSize(), QIcon::Normal, QIcon::Off);
        ConsoleWindow->setWindowIcon(icon);
        ConsoleWindow->setLocale(QLocale(QLocale::English, QLocale::Australia));
        action_Quit = new QAction(ConsoleWindow);
        action_Quit->setObjectName(QStringLiteral("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_NewWindow = new QAction(ConsoleWindow);
        action_NewWindow->setObjectName(QStringLiteral("action_NewWindow"));
        action_Copy = new QAction(ConsoleWindow);
        action_Copy->setObjectName(QStringLiteral("action_Copy"));
        action_SelectAll = new QAction(ConsoleWindow);
        action_SelectAll->setObjectName(QStringLiteral("action_SelectAll"));
        action_ReadBagFile = new QAction(ConsoleWindow);
        action_ReadBagFile->setObjectName(QStringLiteral("action_ReadBagFile"));
        action_SaveLogs = new QAction(ConsoleWindow);
        action_SaveLogs->setObjectName(QStringLiteral("action_SaveLogs"));
        action_AbsoluteTimestamps = new QAction(ConsoleWindow);
        action_AbsoluteTimestamps->setObjectName(QStringLiteral("action_AbsoluteTimestamps"));
        action_AbsoluteTimestamps->setCheckable(true);
        action_ShowTimestamps = new QAction(ConsoleWindow);
        action_ShowTimestamps->setObjectName(QStringLiteral("action_ShowTimestamps"));
        action_ShowTimestamps->setCheckable(true);
        action_ShowTimestamps->setChecked(true);
        action_ColorizeLogs = new QAction(ConsoleWindow);
        action_ColorizeLogs->setObjectName(QStringLiteral("action_ColorizeLogs"));
        action_ColorizeLogs->setCheckable(true);
        action_ColorizeLogs->setChecked(true);
        action_SelectFont = new QAction(ConsoleWindow);
        action_SelectFont->setObjectName(QStringLiteral("action_SelectFont"));
        action_RegularExpressions = new QAction(ConsoleWindow);
        action_RegularExpressions->setObjectName(QStringLiteral("action_RegularExpressions"));
        action_RegularExpressions->setCheckable(true);
        action_RegularExpressions->setChecked(false);
        action_CopyExtended = new QAction(ConsoleWindow);
        action_CopyExtended->setObjectName(QStringLiteral("action_CopyExtended"));
        action_ReadLogFile = new QAction(ConsoleWindow);
        action_ReadLogFile->setObjectName(QStringLiteral("action_ReadLogFile"));
        action_ReadLogDirectory = new QAction(ConsoleWindow);
        action_ReadLogDirectory->setObjectName(QStringLiteral("action_ReadLogDirectory"));
        centralwidget = new QWidget(ConsoleWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(10, 140, 271, 501));
        splitter->setOrientation(Qt::Horizontal);
        nodeList = new QListView(splitter);
        nodeList->setObjectName(QStringLiteral("nodeList"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nodeList->sizePolicy().hasHeightForWidth());
        nodeList->setSizePolicy(sizePolicy);
        nodeList->setSelectionMode(QAbstractItemView::ExtendedSelection);
        splitter->addWidget(nodeList);
        messageList = new QListView(centralwidget);
        messageList->setObjectName(QStringLiteral("messageList"));
        messageList->setGeometry(QRect(640, 130, 471, 581));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(3);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(messageList->sizePolicy().hasHeightForWidth());
        messageList->setSizePolicy(sizePolicy1);
        messageList->setContextMenuPolicy(Qt::CustomContextMenu);
        messageList->setStyleSheet(QStringLiteral(""));
        messageList->setSelectionMode(QAbstractItemView::ExtendedSelection);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
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
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        debugOptionLayout = new QHBoxLayout();
        debugOptionLayout->setObjectName(QStringLiteral("debugOptionLayout"));
        checkDebug = new QCheckBox(groupBox);
        checkDebug->setObjectName(QStringLiteral("checkDebug"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(2);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(checkDebug->sizePolicy().hasHeightForWidth());
        checkDebug->setSizePolicy(sizePolicy3);
        checkDebug->setChecked(true);

        debugOptionLayout->addWidget(checkDebug);

        debugColorWidget = new QPushButton(groupBox);
        debugColorWidget->setObjectName(QStringLiteral("debugColorWidget"));

        debugOptionLayout->addWidget(debugColorWidget);


        verticalLayout->addLayout(debugOptionLayout);

        infoOptionLayout = new QHBoxLayout();
        infoOptionLayout->setObjectName(QStringLiteral("infoOptionLayout"));
        checkInfo = new QCheckBox(groupBox);
        checkInfo->setObjectName(QStringLiteral("checkInfo"));
        sizePolicy3.setHeightForWidth(checkInfo->sizePolicy().hasHeightForWidth());
        checkInfo->setSizePolicy(sizePolicy3);
        checkInfo->setChecked(true);

        infoOptionLayout->addWidget(checkInfo);

        infoColorWidget = new QPushButton(groupBox);
        infoColorWidget->setObjectName(QStringLiteral("infoColorWidget"));

        infoOptionLayout->addWidget(infoColorWidget);


        verticalLayout->addLayout(infoOptionLayout);

        warnOptionLayout = new QHBoxLayout();
        warnOptionLayout->setObjectName(QStringLiteral("warnOptionLayout"));
        checkWarn = new QCheckBox(groupBox);
        checkWarn->setObjectName(QStringLiteral("checkWarn"));
        sizePolicy3.setHeightForWidth(checkWarn->sizePolicy().hasHeightForWidth());
        checkWarn->setSizePolicy(sizePolicy3);
        checkWarn->setChecked(true);

        warnOptionLayout->addWidget(checkWarn);

        warnColorWidget = new QPushButton(groupBox);
        warnColorWidget->setObjectName(QStringLiteral("warnColorWidget"));

        warnOptionLayout->addWidget(warnColorWidget);


        verticalLayout->addLayout(warnOptionLayout);

        errorOptionLayout = new QHBoxLayout();
        errorOptionLayout->setObjectName(QStringLiteral("errorOptionLayout"));
        checkError = new QCheckBox(groupBox);
        checkError->setObjectName(QStringLiteral("checkError"));
        sizePolicy3.setHeightForWidth(checkError->sizePolicy().hasHeightForWidth());
        checkError->setSizePolicy(sizePolicy3);
        checkError->setChecked(true);

        errorOptionLayout->addWidget(checkError);

        errorColorWidget = new QPushButton(groupBox);
        errorColorWidget->setObjectName(QStringLiteral("errorColorWidget"));

        errorOptionLayout->addWidget(errorColorWidget);


        verticalLayout->addLayout(errorOptionLayout);

        fatalOptionLayout = new QHBoxLayout();
        fatalOptionLayout->setObjectName(QStringLiteral("fatalOptionLayout"));
        checkFatal = new QCheckBox(groupBox);
        checkFatal->setObjectName(QStringLiteral("checkFatal"));
        sizePolicy3.setHeightForWidth(checkFatal->sizePolicy().hasHeightForWidth());
        checkFatal->setSizePolicy(sizePolicy3);
        checkFatal->setMaximumSize(QSize(1116, 774));
        checkFatal->setChecked(true);

        fatalOptionLayout->addWidget(checkFatal);

        fatalColorWidget = new QPushButton(groupBox);
        fatalColorWidget->setObjectName(QStringLiteral("fatalColorWidget"));

        fatalOptionLayout->addWidget(fatalColorWidget);


        verticalLayout->addLayout(fatalOptionLayout);

        clearAllButton = new QPushButton(centralwidget);
        clearAllButton->setObjectName(QStringLiteral("clearAllButton"));
        clearAllButton->setGeometry(QRect(10, 650, 114, 27));
        clearMessagesButton = new QPushButton(centralwidget);
        clearMessagesButton->setObjectName(QStringLiteral("clearMessagesButton"));
        clearMessagesButton->setGeometry(QRect(130, 650, 151, 27));
        checkFollowNewest = new QCheckBox(centralwidget);
        checkFollowNewest->setObjectName(QStringLiteral("checkFollowNewest"));
        checkFollowNewest->setGeometry(QRect(20, 680, 241, 25));
        checkFollowNewest->setChecked(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(288, 452, 63, 41));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(288, 382, 341, 101));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        excludeLabel = new QLabel(centralwidget);
        excludeLabel->setObjectName(QStringLiteral("excludeLabel"));
        excludeLabel->setGeometry(QRect(288, 422, 63, 27));
        excludeText = new QLineEdit(centralwidget);
        excludeText->setObjectName(QStringLiteral("excludeText"));
        excludeText->setGeometry(QRect(368, 422, 260, 27));
        includeLabel = new QLabel(centralwidget);
        includeLabel->setObjectName(QStringLiteral("includeLabel"));
        includeLabel->setGeometry(QRect(288, 392, 59, 27));
        includeText = new QLineEdit(centralwidget);
        includeText->setObjectName(QStringLiteral("includeText"));
        includeText->setGeometry(QRect(368, 392, 261, 27));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 20, 111, 71));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/kepco.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(990, 30, 111, 61));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/UNIST.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(560, 20, 321, 41));
        QFont font1;
        font1.setPointSize(18);
        font1.setItalic(true);
        label_4->setFont(font1);
        label_4->setScaledContents(false);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(140, 30, 831, 41));
        QFont font2;
        font2.setPointSize(23);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        label_5->setFont(font2);
        label_5->setScaledContents(false);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 100, 211, 41));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        label_6->setFont(font3);
        label_6->setScaledContents(false);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(820, 100, 141, 41));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setItalic(true);
        font4.setWeight(75);
        label_8->setFont(font4);
        label_8->setScaledContents(false);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(370, 340, 211, 41));
        label_9->setFont(font3);
        label_9->setScaledContents(false);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(380, 110, 171, 19));
        label_7->setFont(font3);
        label_7->setScaledContents(false);
        runRqtButton = new QPushButton(centralwidget);
        runRqtButton->setObjectName(QStringLiteral("runRqtButton"));
        runRqtButton->setGeometry(QRect(530, 540, 89, 41));
        runQgcButton = new QPushButton(centralwidget);
        runQgcButton->setObjectName(QStringLiteral("runQgcButton"));
        runQgcButton->setGeometry(QRect(410, 540, 89, 41));
        runVideoButton = new QPushButton(centralwidget);
        runVideoButton->setObjectName(QStringLiteral("runVideoButton"));
        runVideoButton->setGeometry(QRect(300, 540, 89, 41));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(380, 490, 211, 41));
        label_10->setFont(font3);
        label_10->setScaledContents(false);
        searchText = new QLineEdit(centralwidget);
        searchText->setObjectName(QStringLiteral("searchText"));
        searchText->setGeometry(QRect(367, 460, 87, 25));
        pushPrev = new QPushButton(centralwidget);
        pushPrev->setObjectName(QStringLiteral("pushPrev"));
        pushPrev->setGeometry(QRect(546, 460, 80, 25));
        pushNext = new QPushButton(centralwidget);
        pushNext->setObjectName(QStringLiteral("pushNext"));
        pushNext->setGeometry(QRect(460, 460, 80, 25));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(380, 590, 211, 41));
        label_11->setFont(font3);
        label_11->setScaledContents(false);
        runtakeoff = new QPushButton(centralwidget);
        runtakeoff->setObjectName(QStringLiteral("runtakeoff"));
        runtakeoff->setGeometry(QRect(400, 640, 89, 25));
        runLanding = new QPushButton(centralwidget);
        runLanding->setObjectName(QStringLiteral("runLanding"));
        runLanding->setGeometry(QRect(400, 680, 89, 25));
        runARM = new QPushButton(centralwidget);
        runARM->setObjectName(QStringLiteral("runARM"));
        runARM->setGeometry(QRect(300, 640, 89, 25));
        runDisarm = new QPushButton(centralwidget);
        runDisarm->setObjectName(QStringLiteral("runDisarm"));
        runDisarm->setGeometry(QRect(300, 680, 89, 25));
        runInit = new QPushButton(centralwidget);
        runInit->setObjectName(QStringLiteral("runInit"));
        runInit->setGeometry(QRect(500, 640, 131, 25));
        runInit->setStyleSheet(QStringLiteral("background-color:rgb(52, 101, 164);"));
        runStop = new QPushButton(centralwidget);
        runStop->setObjectName(QStringLiteral("runStop"));
        runStop->setGeometry(QRect(500, 680, 131, 25));
        runStop->setStyleSheet(QStringLiteral("background-color:rgb(204, 0, 0)"));
        ConsoleWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ConsoleWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1116, 22));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        menu_Edit = new QMenu(menubar);
        menu_Edit->setObjectName(QStringLiteral("menu_Edit"));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QStringLiteral("menuOptions"));
        ConsoleWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ConsoleWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
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
        ConsoleWindow->setWindowTitle(QApplication::translate("ConsoleWindow", "Monitoring System", Q_NULLPTR));
        action_Quit->setText(QApplication::translate("ConsoleWindow", "&Quit", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Quit->setShortcut(QApplication::translate("ConsoleWindow", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_NewWindow->setText(QApplication::translate("ConsoleWindow", "&New Window", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_NewWindow->setShortcut(QApplication::translate("ConsoleWindow", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_Copy->setText(QApplication::translate("ConsoleWindow", "&Copy", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Copy->setShortcut(QApplication::translate("ConsoleWindow", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_SelectAll->setText(QApplication::translate("ConsoleWindow", "Select &All", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_SelectAll->setShortcut(QApplication::translate("ConsoleWindow", "Ctrl+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_ReadBagFile->setText(QApplication::translate("ConsoleWindow", "&Read Bag File...", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_ReadBagFile->setShortcut(QApplication::translate("ConsoleWindow", "Ctrl+R", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_SaveLogs->setText(QApplication::translate("ConsoleWindow", "&Save Logs...", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_SaveLogs->setShortcut(QApplication::translate("ConsoleWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_AbsoluteTimestamps->setText(QApplication::translate("ConsoleWindow", "&Absolute Timestamps", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_AbsoluteTimestamps->setToolTip(QApplication::translate("ConsoleWindow", "Absolute Timestamps", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        action_ShowTimestamps->setText(QApplication::translate("ConsoleWindow", "&Show Timestamps", Q_NULLPTR));
        action_ColorizeLogs->setText(QApplication::translate("ConsoleWindow", "&Colorize Logs", Q_NULLPTR));
        action_SelectFont->setText(QApplication::translate("ConsoleWindow", "Select &Font...", Q_NULLPTR));
        action_RegularExpressions->setText(QApplication::translate("ConsoleWindow", "Allow &regular expressions in Include/Exclude", Q_NULLPTR));
        action_CopyExtended->setText(QApplication::translate("ConsoleWindow", "Copy &Extended", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_CopyExtended->setToolTip(QApplication::translate("ConsoleWindow", "Copy Extended Log", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        action_CopyExtended->setShortcut(QApplication::translate("ConsoleWindow", "Ctrl+E", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_ReadLogFile->setText(QApplication::translate("ConsoleWindow", "Read &Log File...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_ReadLogFile->setToolTip(QApplication::translate("ConsoleWindow", "Read a rosout.log file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        action_ReadLogFile->setShortcut(QApplication::translate("ConsoleWindow", "Ctrl+L", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_ReadLogDirectory->setText(QApplication::translate("ConsoleWindow", "Read Log &Directory...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_ReadLogDirectory->setToolTip(QApplication::translate("ConsoleWindow", "Read Log Directory", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        action_ReadLogDirectory->setShortcut(QApplication::translate("ConsoleWindow", "Ctrl+D, Return", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        groupBox->setTitle(QString());
        checkDebug->setText(QApplication::translate("ConsoleWindow", "Debug", Q_NULLPTR));
        checkInfo->setText(QApplication::translate("ConsoleWindow", "Info", Q_NULLPTR));
        checkWarn->setText(QApplication::translate("ConsoleWindow", "Warn", Q_NULLPTR));
        checkError->setText(QApplication::translate("ConsoleWindow", "Error", Q_NULLPTR));
        checkFatal->setText(QApplication::translate("ConsoleWindow", "Fatal ", Q_NULLPTR));
        clearAllButton->setText(QApplication::translate("ConsoleWindow", "Clear All", Q_NULLPTR));
        clearMessagesButton->setText(QApplication::translate("ConsoleWindow", "Clear Messages", Q_NULLPTR));
        checkFollowNewest->setText(QApplication::translate("ConsoleWindow", "Follow Newest Messages", Q_NULLPTR));
        label->setText(QApplication::translate("ConsoleWindow", "Search", Q_NULLPTR));
        excludeLabel->setText(QApplication::translate("ConsoleWindow", "Exclude", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        excludeText->setToolTip(QApplication::translate("ConsoleWindow", "Filter for messages that don't include substrings. Separate substrings with a semicolon.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        includeLabel->setText(QApplication::translate("ConsoleWindow", "Include", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        includeText->setToolTip(QApplication::translate("ConsoleWindow", "Filter for messages that include substrings. Separate substrings with a semicolon.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        includeText->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QApplication::translate("ConsoleWindow", "\354\206\241\354\240\204\354\204\240\353\241\234 \354\240\220\352\262\200\354\232\251 \354\236\220\354\234\250 \353\271\204\355\226\211 \353\223\234\353\241\240 \354\213\244\354\213\234\352\260\204 \352\261\264\354\240\204\354\204\261 \353\252\250\353\213\210\355\204\260\353\247\201 \354\213\234\354\212\244\355\205\234", Q_NULLPTR));
        label_6->setText(QApplication::translate("ConsoleWindow", "< Activated Fuctions >", Q_NULLPTR));
        label_8->setText(QApplication::translate("ConsoleWindow", "< Log Viewer >", Q_NULLPTR));
        label_9->setText(QApplication::translate("ConsoleWindow", "< Monitoring Options >", Q_NULLPTR));
        label_7->setText(QApplication::translate("ConsoleWindow", "< Severity Level >", Q_NULLPTR));
        runRqtButton->setText(QApplication::translate("ConsoleWindow", "run Rqt", Q_NULLPTR));
        runQgcButton->setText(QApplication::translate("ConsoleWindow", "run GCS", Q_NULLPTR));
        runVideoButton->setText(QApplication::translate("ConsoleWindow", "run Video", Q_NULLPTR));
        label_10->setText(QApplication::translate("ConsoleWindow", "< Add-On Programs >", Q_NULLPTR));
        pushPrev->setText(QApplication::translate("ConsoleWindow", "Previous", Q_NULLPTR));
        pushNext->setText(QApplication::translate("ConsoleWindow", "Next", Q_NULLPTR));
        label_11->setText(QApplication::translate("ConsoleWindow", "< Shortcut Commands >", Q_NULLPTR));
        runtakeoff->setText(QApplication::translate("ConsoleWindow", "Take-off", Q_NULLPTR));
        runLanding->setText(QApplication::translate("ConsoleWindow", "Landing", Q_NULLPTR));
        runARM->setText(QApplication::translate("ConsoleWindow", "Arm", Q_NULLPTR));
        runDisarm->setText(QApplication::translate("ConsoleWindow", "Disarm", Q_NULLPTR));
        runInit->setText(QApplication::translate("ConsoleWindow", "System Initialize", Q_NULLPTR));
        runStop->setText(QApplication::translate("ConsoleWindow", "Emergency Stop", Q_NULLPTR));
        menu_File->setTitle(QApplication::translate("ConsoleWindow", "&File", Q_NULLPTR));
        menu_Edit->setTitle(QApplication::translate("ConsoleWindow", "&Edit", Q_NULLPTR));
        menuOptions->setTitle(QApplication::translate("ConsoleWindow", "Optio&ns", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConsoleWindow: public Ui_ConsoleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLE_WINDOW_RQT_H
