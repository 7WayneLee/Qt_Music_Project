#pragma execution_character_set("utf-8")
#include "navwidget.h"

NavWidget::NavWidget(QWidget *parent) : QWidget(parent)
{
    setStyleSheet("QListWidget { border:none; } "
                  "QListWidget::item { color:#cccccc; padding:3px;} "
                  "QListWidget::item:selected { background-color:#333333; }");
    setFixedWidth(200);
    setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Expanding);
    QVBoxLayout *vbox = new QVBoxLayout;
    listWidget = new QListWidget;
    listWidget->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Expanding);
    QListWidgetItem *LWI;

    LWI = new QListWidgetItem("推荐");
    LWI->setFlags(Qt::NoItemFlags);
    listWidget->insertItem(0, LWI);
    //LWI = new QListWidgetItem(QIcon(":/music.svg"), "发现音乐");
    LWI = new QListWidgetItem(QIcon(":/icon/rank.svg"), "排行榜");
    listWidget->insertItem(1, LWI);
/*    LWI = new QListWidgetItem(QIcon(":/radio.svg"), "私人FM");
    LWI = new QListWidgetItem(QIcon(":/icon/songlist.svg"), "歌单");
    listWidget->insertItem(2, LWI);
    LWI = new QListWidgetItem(QIcon(":/video.svg"), "MV");
    LWI = new QListWidgetItem(QIcon(":/icon/lyric.svg"), "歌词");
    listWidget->insertItem(3, LWI);
    LWI = new QListWidgetItem(QIcon(":/icon/friend.svg"), "朋友");
    listWidget->insertItem(4, LWI);
*/
    LWI = new QListWidgetItem("本地音乐");
    LWI->setFlags(Qt::NoItemFlags);
    listWidget->insertItem(5, LWI);
    LWI = new QListWidgetItem(QIcon(":/icon/music1.svg"), "本地音乐");
    listWidget->insertItem(6, LWI);
    LWI = new QListWidgetItem(QIcon(":/icon/download.svg"), "下载管理");
    listWidget->insertItem(7, LWI);
    //LWI = new QListWidgetItem(QIcon(":/icon/cloud.svg"), "我的音乐云盘");
    //listWidget->insertItem(8, LWI);
    //LWI = new QListWidgetItem(QIcon(":/icon/man.svg"), "我的歌手");
    //listWidget->insertItem(9, LWI);
    //LWI = new QListWidgetItem(QIcon(":/icon/video.svg"), "我的MV");
    //listWidget->insertItem(10, LWI);
    //LWI = new QListWidgetItem(QIcon(":/icon/radio1.svg"), "我的电台");
    //listWidget->insertItem(11, LWI);
    LWI = new QListWidgetItem("创建的歌单");
    LWI->setFlags(Qt::NoItemFlags);
    listWidget->insertItem(12, LWI);
    LWI = new QListWidgetItem(QIcon(":/icon/heart.svg"), "我喜欢的音乐");
    listWidget->insertItem(13, LWI);
    //LWI = new QListWidgetItem(QIcon(":/icon/songlist.svg"), "我的音乐");
    //listWidget->insertItem(14, LWI);
    vbox->addWidget(listWidget);

    QHBoxLayout *hbox = new QHBoxLayout;
    pushButton_albumPic = new QPushButton;
    pushButton_albumPic->setFixedSize(74,74);
    pushButton_albumPic->setIcon(QIcon(":/icon/disc.svg"));
    pushButton_albumPic->setIconSize(QSize(70,70));
    pushButton_albumPic->setFocusPolicy(Qt::NoFocus);
    pushButton_albumPic->setFlat(true);
    pushButton_albumPic->setCursor(Qt::PointingHandCursor);
    hbox->addWidget(pushButton_albumPic);
    label_songname = new QLabel;
    label_songname->setStyleSheet("font-size:13px;");
    hbox->addWidget(label_songname);
    hbox->addStretch();

    vbox->addLayout(hbox);
    setLayout(vbox);
}
