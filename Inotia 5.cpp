#include<iostream>
#include<cstdio>
#include<iomanip>
#include<conio.h>
#include<cstring>
#include<windows.h>
#include<ctime>
#include<map>
using namespace std;
map<string,int> AMP;
map<string,int> SMP;
string s;
int qsqs[6001];
int uplevel=100;
int TD;
int assTD[2];
bool Is_first[12];
bool Can_go[12];
bool Can_into=true;
bool Is_end;
bool Is_up;
bool Is_change;
bool Wend;
bool Is_save;
string name;
string password="ZTLTQL";
int Wpass;

long long MP,maxMP,ATK,fang,LV=1,G=0,mu=50,gang=0,sheng=20,xilian=0,chou=500;
float baoji=2.5;
int stop_time=27;
long long jinbi,HP,maxHP,EXP,maxEXP;

int ch4;
int rate;
string Tm[5]={"2^31-1=?","101-102=1  移动一个数字，使得等式成立，移动的数字是___","大舅去二舅在三舅的土地租的四舅的房子告诉五舅说六舅去七舅家偷了八舅放在九舅的保险柜里的十舅的钱。   谁是小偷？土地是谁的？（用n表示n舅，中间不用空行）","10月24日是是谁的节日？    1,医生  2,建筑师  3,程序猿  4,数学家","著名数学家丢番图的墓志铭——坟中安葬着丢番图，多么令人惊讶，这里忠实地记录了他经历的道路，上帝给予的童年占六分之一，又过十二分之一，两鬓长胡，再过七分之一，燃起婚烟的蜡烛，五年之后天赐贵子，可怜迟到的宁馨儿，享年仅及其父之半，便进入冰冷的墓，悲伤只有用数论的研究去弥补，又过四年，他也走完了人生的旅途       请问丢番图一共活了多少岁"};
int answer[5]={2147483647,2,63,3,84};

int bag=0,bag1=0,bag2=0;
int choujin[10]={1000,2000,3000,4000,5500,6500,7500,9000,100,10000};
int chouG[10]={45,105,195,265,385,525,695,845,1055,1855};

string monster[22]={"SB","2B","花园精灵","花园恶魔","弯角龙","烈焰弯角龙","2B","SB","哥布林杀手","哥布林圣骑士","狼人","血色狼人","人马战士","人马狂战士","沼泽游魂","沼泽断头鬼","冤魂","骷髅王","海妖","海妖女王","石钟乳怪","巨岩魔王"};
int monsterjinbi[22]={0,0,156,222,117,158,0,0,157,209,175,239,206,282,221,308,263,347,293,379,500,99999};
int monsterHP[22]={0,0,1050,1450,1550,2050,0,0,2000,2650,2750,3250,3550,3850,4050,4450,5050,5950,6550,7550,7850,72950};
int monsterATK[22]={0,0,345,405,455,505,0,0,555,625,705,755,815,875,945,1005,1185,1335,1565,1915,2535,4955};
int monsterEXP[22]={0,0,20,45,35,65,60,0,0,90,90,120,125,180,240,380,450,485,515,585,645,0x3f3f3f3f};
string destin[12]={"SB","新手村","动人花园","阳光海滩","霜风部落","死亡森林","极冰之地","死寂沙漠","亡命沼泽","绝命地牢","沉没的大陆","石钟乳洞"};
int diffLV[12]={0,0,1,2,0,3,5,5,7,8,10,0x7f};

string rand_arms[3]={"格兰芬多之剑","黄金杯","魔法石"};
int rand_armsxing[3]={1500,780,888};
string legend_arms[4]={"绝云","焚寂","彗蚀","煌灭"};
int la_ATK[4]={2800,2650,3200,3700};

string ke[5]= {"金币*1000","金币*2000","金币*3000","金币*4000","金币*5000"};
string qie[5]= {"巨灵药水","元气恢复药水","特大生命药水","特大魔法药水","小瓶生命药水"};
string ka[5]= {"黑铁刀","魔术棒","青玉剑","罗马短剑","华为P30"};
int kaatk[5]= {380,450,270,400,1000};
string de[5]= {"精灵铠甲","嗜血者","古埃及胸甲","铁皮甲","幽灵板甲"};
int defang[5]= {250,350,550,450,900};
string ge[5]= {"绿宝石","龙之卷轴","钢铁*20","至圣的水晶","蓝宝石"};
string sai[5]= {"国王币*100","国王币*200","国王币*300","国王币*400","国王币*1000"};
string xiguan[5]= {"挖鼻屎","挖耳屎","抠脚趾","自言自语","咬手指"};

string juese;

string diaoluo1[4]= {"藏银刀","红缨枪","巨剑","恶灵法杖"};
int diaoluo1ATK[4]= {129,167,225,285};
string yaoshui[10]= {"00","00","00","00","00","00","00","00","00","00"},wuqi[10]= {"00","00","00","00","00","00","00","00","00","00"};
string daoju[10]= {"00","00","00","00","00","00","00","00","00","00"};
int xinneng[10],wuqiLV[10],yaoshuixiao[10];
string zhuangbeiwuqi="00",zhuangbeifangju="00";
int zhuangbeia=0,zhuangbeif=0;
bool Is_pct[10];
bool pct;
bool a_f[10];

string mission[10]={"前往‘接受任务&查看主线进度’查看第一个主线任务","前往霜风部落与长老交谈","击败巨岩魔王，拯救世界"};
int reward[3]={100,200,0x3f3f3f};
string skill[4][4]={"狂乱突袭","毁灭一击","断空撕裂斩","战神附体",
					 "圣光斩","痊愈之光","天之审判","勇者修炼",
					 "身藏不露","暗影一击","毒之深渊","游刃有余",
					 "烈焰火球","石魔召唤","九天玄雷","魔之奥秘",
					 };
int skillxn[4][4]={275,322,372,35,
					227,375,300,35,
					0,251,348,30,
					266,0,358,40,
					};
int needJB[4][4]={750,825,1030,920,
				  765,825,805,915,
				  770,800,1020,930,
				  795,1100,1000,995,
				  };
float needMP[4][4]={35,46,55,30,
				    38,50,60,30,
				    30,35,40,35,
				    40,55,70,40,
				    };
float reduceMP[4][4]={0.1,0.1,0.2,0.1,
					  0.1,0.1,0.1,0.2,
					  0.2,0.1,0.1,0.2,
					  0.2,0.1,0.1,0.2,
					  };
bool Is_xl[4];
int choosejn;

int color[6][2]={{14,9},{10,13},{12,15},{9,8},{7,14},{3,14}};

string map2[20]= {"########################",
                  "###O # #   #   #   #   #",
                  "##  #  # # # # # # # # #",
                  "#  #  #  # # # #g# # # #",
                  "# #  #g #  # # # # # # #",
                  "#   #  #  ## # # # # #g#",
                  "##    #g # g #   #   # #",
                  "#g # #  #  ## ### # ## #",
                  "## #   #  #            #",
                  "#  # # # #  ############",
                  "## # # # #B            #",
                  "#  # #g# #  # ### #### #",
                  "## # # #  #  #g  # ? # #",
                  "# g# #  #  # # # # # # #",
                  "#?#   #  # # # # # # # #",
                  "# g #  #   #   #   #S  #",
                  "########################",
                 };
string map3[20]= {"########################",
                  "#  #   #  ?#   #   #S  #",
                  "##   # #g# # # # # # # #",
                  "# g# # # # # # # # # # #",
                  "#?#  # # # # # # # # # #",
                  "##  #  # #g# # # # # # #",
                  "# g#     # # #g# # # # #",
                  "# #  #     # # #g#g#B# #",
                  "# #g#  #  ## # # # # # #",
                  "# # # #  #   # # # # # #",
                  "# # # # #    # # # # # #",
                  "# # #g# # # #  # #g# # #",
                  "# #g# # # #  # # # # # #",
                  "# # # # # # #?   #   # #",
                  "# # # # #   ##### #### #",
                  "#O#   #   #        g   #",
                  "########################",
                 };
string map4[20]= {"########################",
				  "#          ######  M   #",
				  "# ###### ##########    #",
				  "# ##       #      # #  #",
				  "# N  ##### # ###    ## #",
				  "##  #####    ###### #  #",
			      "## #  H##        ##### #",
				  "## #   ##    ### ##### #",
				  "## # ##   L        #   #",
				  "##   ###      #### # # #",
			      "#  ####        ### # # #",
				  "##  F### ######### # # #",
				  "##   ### #     ### # # #",
				  "#        # ###  ##   # #",
				  "## ######  ########### #",
				  "##      O  ##          #",
				  "##########S#############",
				   };   
string map5[20]= {"########################",
                  "# # # # # # # #S       #",
                  "#         g    ####### #",
                  "# ############B        #",
                  "#g            #### ###?#",
                  "########## ##       g  #",
                  "#       g    ######### #",
                  "# #### #####B       g  #",
                  "#   g       ############",
                  "######### #    g       #",
                  "#   g      g########## #",
                  "# ## # # ##            #",
                  "# # # # # # ############",
                  "# #            g       #",
                  "# ####### ############ #",
                  "#O         g          g#",
                  "########################",
                 };
string map6[20]= {"########################",
                  "#          #        # ?#",
                  "#g########  #  # # #  ##",
                  "# #      # # #  g# # # #",
                  "#  ##g## # #   ##  #g  #",
                  "# # #    # # # ## #  # #",
                  "# # # # ## g## #    #  #",
                  "# #   #   # #  #g#  # ##",
                  "# # #g#g# # # #  # #?  #",
                  "# # # #  ## # # #  # # #",
                  "#  ## # #     # ##g# # #",
                  "# #   # # #  #   # #  ##",
                  "# # # # #g  #  # #  #  #",
                  "# ##  # # ##  # g  #   #",
                  "#   # #   #  #  # #### #",
                  "#O#   # ##  #  #  #S  B#",
                  "########################",
                 };
string map7[20]= {"########################",
                  "#O     #    #   #      #",
                  "###### # ###  #### ### #",
                  "#      #   #     #   # #",
                  "###### # ####### # ### #",
                  "#   g  #      #  #g  # #",
                  "# ####   #### # #### # #",
                  "#      #  #   #    # # #",
                  "###### #  # ###### # # #",
                  "#?  g  # ##g    #? # # #",
                  "###### #   #### g  # # #",
                  "#  #   #  #   #   ## #B#",
                  "#  # ### # #  # #  # # #",
                  "# ##   # # # ## ## # # #",
                  "#g   # # # #  #g#  # # #",
                  "# #  #          #    #S#",
                  "########################",
                 };
string map8[20]= {"########################",
                  "#O#? g#   ###    #S    #",
                  "#  ## # # ### ## ### B #",
                  "##      #      # #     #",
                  "#### ####g###### # ### #",
                  "#  # ## # # ##   # g # #",
                  "#   g## #   ## #####   #",
                  "# ##### ### g#     # ###",
                  "#    g     # # ### #  ##",
                  "##### ######   #   ## ##",
                  "##    #  # ##### ##g   #",
                  "## #### ##       #  ####",
                  "##    # ## #g# # ##   ##",
                  "##### #    # # # ## # ##",
                  "#  g     ### # #    #g##",
                  "#?#####      ######   ##",
                  "########################",
                 };
string map9[20]= {"########################",
                  "#O ####g  ?#          ##",
                  "## #  # ###    ### ## ##",
                  "#  #      # ## g   ## ##",
                  "# ## # ## # ######### ##",
                  "# g  #### #  #   #S## ##",
                  "## ####   ## #g# #  # ##",
                  "## #  # # ##   # ## # ##",
                  "#g ##   #  ##### ##  B##",
                  "# #####   ##g  #   #####",
                  "#  g  # #### # # # #   #",
                  "# # # # ##   # # #   # #",
                  "# # #g  ## ###   ## ##g#",
                  "# #  ##### # ## ### ## #",
                  "#  #      g#       #?  #",
                  "#  ##    ####  #  ###  #",
                  "########################",
                 };
string map10[20]= {"##########S#############",
                   "#         B       # g  #",
                   "#  g         g         #",
                   "#                 ### ##",
                   "####### ######  ###g# # ",
                   "#  g  # #    #    # # # ",
                   "#     # # g   B  ## g # ",
                   "#####   ######  ###   # ",
                   "#g   #  #    #   ## # # ",
                   "#    #       #   g# # # ",
                   "####    ####   ## #g### ",
                   "#g #  # #         #   # ",
                   "##    ###  ##   ###?#?# ",
                   "##### ##   ### ######## ",
                   "# # # #  # #         ## ",
                   "#O       #g#  #       # ",
                   "####################### ",
                 };
void guangbiao(int x,int y) {
	COORD pos;
	pos.X=x;
	pos.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
void tiaose(int mn) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),mn);
	//  1，深蓝色    2，绿色    3，浅蓝色    4，暗红色    5，暗粉色    6，棕色
	//  7 ，淡白色     8，灰色    9，蓝色     10，绿色     11，亮蓝色      12，深红
	//  13，深粉色     14，黄色     15，白色
}
bool check() {
	for(int i=0; i<=bag2; i++) {
		if(daoju[i]!="00") {
			return true;
		}
	}
	return false;
}
void Clear() {
	guangbiao(1,5);
	for(int i=1; i<=2000; i++) {
		cout<<" ";
	}
}
void say(string s)
{
	for(int i=0;i<=s.size()-1;i++)
	{
		cout<<s[i];
		Sleep(25);
	}
}
void qsay(string s)
{
	for(int i=0;i<=s.size()-1;i++)
	{
		cout<<s[i];
		Sleep(10);
	}
}
void Slowsay(string s)
{
	for(int i=0;i<=s.size()-1;i++)
	{
		cout<<s[i];
		Sleep(stop_time);
	}
}
void HideCursor(int n)
{
	if(Is_change)
	{
		return ;
	}
	CONSOLE_CURSOR_INFO cursor_info={1,n};
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}
void ShakeWindow(int move){
	int SHAKE=120+move;
    RECT rect; 
    HWND hwnd=GetForegroundWindow();
    GetWindowRect(hwnd,&rect);
    MoveWindow(hwnd,rect.left+SHAKE,rect.top,rect.right-rect.left,rect.bottom-rect.top,TRUE);//向右 
    Sleep(25);
    MoveWindow(hwnd,rect.left+SHAKE,rect.top-SHAKE,rect.right-rect.left,rect.bottom-rect.top,TRUE);//向上 
    Sleep(25);
    MoveWindow(hwnd,rect.left,rect.top-SHAKE,rect.right-rect.left,rect.bottom-rect.top,TRUE); 
    Sleep(25);
    MoveWindow(hwnd,rect.left,rect.top,rect.right-rect.left,rect.bottom-rect.top,TRUE);
}
void Read()
{
	system("cls");
	Slowsay("请在文件夹中找到‘Inotia 5.txt’并打开它\n");
	Sleep(1000);
	Slowsay("复制里面所有的数据后，将它们全部输入进来(切勿输入多余的东东)\n");
	getline(cin,name);
	cin>>juese;
	cin>>HP>>maxHP;
	cin>>MP>>maxMP;
	cin>>ATK;
	cin>>fang;
	cin>>EXP>>maxEXP;
	cin>>LV;
	cin>>jinbi;
	cin>>G;
	cin>>choosejn;
	for(int i=1;i<=11;i++)
	{
		cin>>Is_first[i];
	}
	for(int i=1;i<=11;i++)
	{
		cin>>Can_go[i];
	}
	cin>>Can_into;
	cin>>uplevel;
	cin>>rate;
	cin>>TD;
	cin>>assTD[0]>>assTD[1];
	cin>>bag>>bag1>>bag2;
	for(int i=0;i<=9;i++)
	{
		cin>>yaoshui[i];
	}
	for(int i=0;i<=9;i++)
	{
		cin>>wuqi[i];
	}
	for(int i=0;i<=9;i++)
	{
		cin>>xinneng[i];
	}
	for(int i=0;i<=9;i++)
	{
		cin>>wuqiLV[i];
	}
	for(int i=0;i<=9;i++)
	{
		cin>>a_f[i];
	}
	for(int i=0;i<=9;i++)
	{
		cin>>Is_pct[i];
	}
	for(int i=0;i<=9;i++)
	{
		cin>>daoju[i];
	}
	for(int i=0;i<=9;i++)
	{
		cin>>yaoshui[i];
	}
	for(int i=0;i<=9;i++)
	{
		cin>>yaoshuixiao[i];
	}
	for(int i=0;i<=3;i++)
	{
		cin>>Is_xl[i];
	}
	cin>>zhuangbeiwuqi>>zhuangbeia;
	cin>>zhuangbeifangju>>zhuangbeif;
	cin>>pct;
	cin>>mu>>sheng>>gang;
	cin>>xilian;
	cin>>chou;
	Sleep(1500);
	system("cls");
	Slowsay("读取存档成功！\n");
	Sleep(1000);
}
void POF()
{
	freopen("Inotia 5.txt","w",stdout);
	cout<<name<<endl;
	cout<<juese<<endl;
	cout<<HP<<endl;
	cout<<maxHP<<endl;
	cout<<MP<<endl;
	cout<<maxMP<<endl;
	cout<<ATK<<endl;
	cout<<fang<<endl;
	cout<<EXP<<endl;
	cout<<maxEXP<<endl;
	cout<<LV<<endl;
	cout<<jinbi<<endl;
	cout<<G<<endl;
	cout<<choosejn<<endl;
	for(int i=1;i<=11;i++)
	{
		cout<<Is_first[i]<<endl;
	}
	for(int i=1;i<=11;i++)
	{
		cout<<Can_go[i]<<endl;
	}
	cout<<Can_into<<endl;
	cout<<uplevel<<endl;
	cout<<rate<<endl;
	cout<<TD<<endl;
	cout<<assTD[0]<<endl;
	cout<<assTD[1]<<endl;
	cout<<bag<<endl;
	cout<<bag1<<endl;
	cout<<bag2<<endl;
	for(int i=0;i<=9;i++)
	{
		cout<<yaoshui[i]<<endl;
	}
	for(int i=0;i<=9;i++)
	{
		cout<<wuqi[i]<<endl;
	}
	for(int i=0;i<=9;i++)
	{
		cout<<xinneng[i]<<endl;
	}
	for(int i=0;i<=9;i++)
	{
		cout<<wuqiLV[i]<<endl;
	}
	for(int i=0;i<=9;i++)
	{
		cout<<a_f[i]<<endl;
	}
	for(int i=0;i<=9;i++)
	{
		cout<<Is_pct[i]<<endl;
	}
	for(int i=0;i<=9;i++)
	{
		cout<<daoju[i]<<endl;
	}
	for(int i=0;i<=9;i++)
	{
		cout<<yaoshui[i]<<endl;
	}
	for(int i=0;i<=9;i++)
	{
		cout<<yaoshuixiao[i]<<endl;
	}
	for(int i=0;i<=3;i++)
	{
		cout<<Is_xl[i]<<endl;
	}
	cout<<zhuangbeiwuqi<<endl;
	cout<<zhuangbeia<<endl;
	cout<<zhuangbeifangju<<endl;
	cout<<zhuangbeif<<endl;
	cout<<pct<<endl;
	cout<<mu<<endl;
	cout<<sheng<<endl;
	cout<<gang<<endl;
	cout<<xilian<<endl;
	cout<<chou<<endl;
}
void draw(string map[30],int k,int c) {
	tiaose(color[c][0]);
	cout<<"==============================\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"==============================\n\n\n";
	tiaose(15);
	cout<<"所在地："<<destin[k]<<endl;
	cout<<"难度等级：";
	if(diffLV[k]>=1&&diffLV[k]<=3)
	{
		tiaose(10);
	}
	if(diffLV[k]>=4&&diffLV[k]<=5)
	{
		tiaose(14);
	}
	if(diffLV[k]>=6&&diffLV[k]<=7)
	{
		tiaose(4);
	}
	if(diffLV[k]>=8&&diffLV[k]<=10)
	{
		tiaose(12);
	}
	cout<<diffLV[k]<<endl;
	tiaose(color[c][1]);
	guangbiao(3,2);
	for(int i=0;i<=16;i++)
	{
		for(int j=0;j<=23;j++)
		{
			if(map[i][j]=='O')
			{
				tiaose(15);
				cout<<'O';
				tiaose(color[c][1]);
			}
			else
			{
				cout<<map[i][j];
			}
		}
		guangbiao(3,i+3);
	}
	tiaose(15);
}
void jindu(int sum) {
	system("cls");
	time_t now=time(0);
    char* dt=ctime(&now);
    HideCursor(0);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	cout<<"+============================================+"<<endl;
	cout<<"|                                            |"<<endl;
	cout<<"+============================================+"<<endl;
	guangbiao(1,1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12|1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	for(int i=0;i<22;i++)
	{
		Sleep(sum-5);
		cout<<"█";
	}
	tiaose(14);
	cout<<endl;
	cout<<endl;
	cout<<"艾诺迪亚5：巨岩魔王的觉醒       "<<dt;
	cout<<endl;
	cout<<endl;
	HideCursor(1);
}
void The_end(int ch15) {
	getline(cin,s);
	HideCursor(0);
	Is_end=true;
	stop_time+=15;
	Sleep(3000);
	system("cls");
	if(ch15==1) {
		getline(cin,s);
		system("cls");
		Slowsay("………………\n");
		Slowsay("………………\n");
		Slowsay("………………\n");
		Sleep(6000);
		system("cls");
		Slowsay("三个月后\n");
		getline(cin,s);
		system("cls");
		Slowsay("原霜风部落，烈士公墓前……\n");
		getline(cin,s);
		Slowsay("昆迪将一束玫瑰放在了最中间一块墓碑上，走到了一旁");
		getline(cin,s);
		Slowsay("这块墓碑上写着：“这里安息着，我们最勇敢、可敬的英雄——");
		Slowsay(name);
		Slowsay("，公元前4997992——公元前4998014，享年22岁”\n");
		getline(cin,s);
		system("cls");
		Slowsay("“");
		Slowsay(name);
		Slowsay("，我们回来看你了”");
		Sleep(1000);
		getline(cin,s);
		system("cls");
		Slowsay("“很抱歉，我们没能第一时间制作出解药，但因为你，人类没有失去最后的希望\n");
		Sleep(1500);
		Slowsay("“霜风部落的兽人们在你死后的半个月制作出了一种缓解药水，它有着巨大的能量，即使半个身子被僵化了，也能依靠自身力量重生！”");
		getline(cin,s);
		system("cls");
		Slowsay("“杀死剩余的怪兽更不用说了，人类在两个月内就收复了被侵略的土地\n");
		getline(cin,s);
		system("cls");
		Slowsay("呐，这是政府给你的勋章，勇敢的英雄，人类的救星，世界级的待遇……我就放这儿了\n");
		getline(cin,s);
		Slowsay("…………\n");
		Sleep(1000);
		Slowsay("我想说的就这么多了，以后有空再来看你，再见\n");
		Sleep(1000);
		getline(cin,s);
		Sleep(1000);
		system("cls");
	}
	if(ch15==2) {
		system("cls");
		Sleep(1500);
		system("cls");
		Sleep(3500);
		Slowsay("历史已经过去，英雄不复存在\n");
		Sleep(2000);
		system("cls");
		Slowsay("当");
		Slowsay(name);
		Slowsay("和昆迪、SuperHunter一起醒来时，世界已经恢复了和平\n");
		Sleep(1000);
		Slowsay("但是，几乎没有人知道他们干了些什么\n");
		Sleep(2000);
		system("cls");
		Slowsay("霜风部落里，那些脱险的兽人们一起欢呼着，庆祝着这来之不易的胜利，");
		Sleep(1000);
		Slowsay("然而他们甚至并不知道是怎么脱险的\n");
		Sleep(3000);
		system("cls");
		Slowsay("新手村内，响起了久违的欢笑声。\n");
		Sleep(2000);
		system("cls");
		Slowsay("国界被推翻，刀枪被销毁。再也没有所谓的国家之分，整个地球成了一个小村庄，大家齐心协力，将地球恢复了五百万年前的平静\n");
		Sleep(2000);
		system("cls");
		Sleep(2000);
		Slowsay("但是，在某些人心灵深处,留下的那一丝淡淡的忧伤，将会永远伴随着他们……\n");
		Sleep(3000);
	}
	if(ch15==3) {
		tiaose(15);
		Sleep(2000);
		stop_time=55;
		Slowsay("…………\n");
		Slowsay("…………\n");
		Sleep(2000);
		system("cls");
		Slowsay("“我看见你所说的那个玩家了……”\n");
		Sleep(2000);
		system("cls");
		Slowsay("“");
		Slowsay(name);
		Slowsay("？”\n");
		Sleep(2000);
		system("cls");
		Slowsay("“是的，小心，他现在已经达到了更高的境界，他能读懂我们的心思了”\n\n");
		Sleep(1500);
		Slowsay("“无伤大雅，他认为我们只是游戏中的一部分”\n");
		Sleep(2000);
		system("cls");
		Slowsay("“我喜欢这个玩家，他玩得很好，没有放弃过”\n\n");
		Sleep(1500);
		system("cls");
		Slowsay("“他以屏幕上出现的文字的形式阅读着我们的思想。”\n");
		Sleep(2000);
		system("cls");
		Slowsay("“在他深陷游戏的梦境时，他总以这种方式想象出各种各样的事物。”\n");
		Sleep(1500);
		Slowsay("“哈，那个原始的界面。经历百万年的岁月，它依然在工作。但这个玩家在屏幕后，到底创造了什么真实的构造？”\n\n");
		Sleep(2000);
		Slowsay("“他与别的玩家一样，在现实里辛勤劳作，却在游戏里雕刻出一个真实的世界”\n");
		Sleep(2000);
		system("cls");
		Slowsay("“不过，他还没有达到最高境界，为了达到最高境界，他得完成生命的长梦，而非游戏那短暂的浮梦”\n");
		Sleep(2500);
		system("cls");
		Slowsay("“是的，他要自己完成，我们不能干涉”\n\n");
		Sleep(1500);
		Slowsay("“那就让他去吧，我们就在这儿看着他”\n");
		Sleep(2000);
		system("cls");
		Slowsay("“你就是那个玩家，");
		Slowsay(name);
		Slowsay("”\n\n\n");
		Sleep(2000);
		Slowsay("“醒来吧”\n");
		Sleep(2000);
		system("cls");
	}
	if(ch15==4) {
		Sleep(1000);
		stop_time=50;
		system("cls");
		Slowsay("…………\n");
		Slowsay("…………\n");
		Slowsay("两个月后，新手村内\n");
		Sleep(1500);
		Slowsay("一群衣冠不整、面呈菜色的人站在一块破破烂烂的墓碑前\n");
		Sleep(2000);
		system("cls");
		Sleep(1000);
		Slowsay("Here lies a nameless people,He is brave and strong\n");
		Sleep(1500);
		Slowsay("Despite his failure, he is still a hero in everyone's heart\n");
		Sleep(1500);
		Slowsay("Because of him, our world is full of warmth");
		Sleep(2000);
		system("cls");
		Slowsay("昆迪从人群中走了上来，对着这块墓碑说道:");
		Sleep(1000);
		system("cls");
		cout<<"“";
		Slowsay(name);
		Slowsay("，唉，没有办法，我们还是没能击败巨岩魔王，不过，你已经尽力了。放心，总有一天，一定还有一位武力高强的英雄会拯救世界的”\n");
		Sleep(1000);
		Slowsay("“现在，巨岩魔王已经将南方占领了，很快就要打到我们这儿来了”\n");
		Sleep(1000);
		system("cls");
		Slowsay("“唔，既然这里是你的家乡，那么，就让你安息在这里吧，你的灵魂能守护这里的”\n");
		Sleep(1000);
		system("cls");
		Slowsay("“我想说的就这么多了，我先走了，再见！”\n");
		Sleep(1000);
		system("cls");
		Slowsay("昆迪他们走了，在这座荒凉的村子里，唯独一块破旧的墓碑格外显眼\n");
		Sleep(1000);
		Slowsay("那块墓碑高大地耸立着，远远望去，像一尊守护神的雕塑......\n");
		Sleep(3000);
	}
}

void xuetiao() {
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	cout<<"+==================================+"<<endl;
	cout<<"|                                  |"<<endl;
	cout<<"+==================================+"<<endl;
	guangbiao(1,1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12|1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	tiaose(2);
	for(int i=0; i<17; i++) {
		Sleep(20);
		cout<<"█";
	}
	tiaose(15);
	guangbiao(83,0);
	cout<<"+==================================+"<<endl; 
	guangbiao(83,1);
	cout<<"|                                  |"<<endl;
	guangbiao(83,2);
	cout<<"+==================================+"<<endl;
	guangbiao(84,1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14|1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	tiaose(4);
	for(int i=1; i<=17; i++) {
		Sleep(20);
		cout<<"█";
	}
	tiaose(14);
	guangbiao(1,3);
}
bool mengjing() {
	system("cls");
	Sleep(2000);
	Slowsay("你突然发现你走在一条似曾相识的小路上\n\n");
	Sleep(1500);
	Slowsay("你旁边的景物竟是如此熟悉，但实在是记不起来在哪儿见过了\n");
	Sleep(1500);
	system("cls");
	Sleep(1000);
	Slowsay("“唔哈哈哈哈哈哈哈哈!”\n");
	Sleep(1000);
	system("cls");
	Slowsay("这时，一声刺耳的奸笑声传来\n\n");
	Sleep(1000);
	Slowsay("一个身披斗篷，身体透明的“人”飞了过来\n");
	Sleep(1000);
	system("cls");
	Slowsay("你心里一惊，问：“你是谁？”\n");
	Sleep(2000);
	Slowsay("“我是谁？你猜！哈哈~ O(∩_∩)O”\n");
	Sleep(1000);
	system("cls");
	Slowsay("“你现在所在的地方就是你过去在梦中所曾经历过的地方”\n");
	Sleep(1000);
	Slowsay("“不过，想活着回去可不是那么容易的是哦，哈哈哈哈哈”\n");
	Sleep(2000);
	system("cls");
	Slowsay("你心想：“这人是不是脑残啊，老是笑个没完没了”,不过你还是装模做样地问：“为什么？”\n");
	Sleep(1000);
	system("cls");
	Slowsay("“因为嘛……………………你猜~”\n\n");
	Sleep(1000);
	Slowsay("“今天，本人心情好~只要你能答出下面这题，我就放你回去”\n");
	Sleep(1000);
	system("cls");
	Slowsay("先有鸡还是先有蛋？  回答：1,鸡  2,蛋\n");
	int a;
	cin>>a;
	bool q;
	if(a!=1&&a!=2) {
		Slowsay("哎呀呀，你敢不按题目要求作答？\n");
		Sleep(1000);
		system("cls");
	}
	if(a==1) {
		Sleep(1000);
		Slowsay("╭(╯^╰)╮，算你回答正确，回去吧~\n");
		Sleep(1000);
		Slowsay("一道金色的光芒笼罩了大地，当光芒消失后，你已经回到了刚刚的地方…………\n");
		return true;
	}
	if(a==2) {
		Sleep(1000);
		Slowsay("哈哈，回答错误！！！！\n");
	}
	Slowsay("我要把你摄入死神拷问室，把你活活整死，哼哼~\n");
	Sleep(2000);
	system("cls");
	Slowsay("你木有听清，便问：“是什烤火室是神马？”\n");
	Sleep(1000);
	Slowsay("“NQS！我要把你好好整整——kshdoadhdbncjksamkxha!”\n");
	Sleep(1000);
	system("cls");
	Slowsay("这时，它的身体爆发出一道道紫色的光芒，吞噬了整个空间…………\n");
	Sleep(1000);
	Slowsay("接着，你感觉被一股无形的力量拉入了更深的一层……………………\n");
	Sleep(3500);
	system("cls");
	Slowsay("当你再度睁开眼睛时，你发现你在一根巨大的圆型柱子旁，脚上扣着枷锁，手上戴着手铐\n");
	Sleep(1000);
	Slowsay("你还感到一股无形的力量正把你往柱子上摁，还把你往前推\n");
	Sleep(1000);
	Slowsay("你正在纳闷，突然后面传来一阵空洞的声音——");
	Sleep(1000);
	Slowsay("“哟，又来了一个新人了呀”\n");
	Sleep(1000);
	system("cls");
	Slowsay("你猛地一转头，才发现后面有许多和自己一样被摁在墙上的人，只不过他们穿的衣服都破破烂烂的，肮脏的像个魔鬼似的\n");
	Sleep(1000);
	Slowsay("“你也是被它抓过来的吗？”\n");
	Sleep(1000);
	Slowsay("你说：“是的，不过它是谁？”\n");
	Sleep(1500);
	Slowsay("“传说中的光影盗梦者，在你熟睡或是注意力分散时会将你带入一个你曾在梦里去过的地方。如果幸运，你将会平安回归现实，如果不幸运，你就会被带到这儿来”\n");
	Sleep(1000);
	Slowsay("“你们是什么时候进来的？\n”");
	Sleep(1500);
	system("cls");
	Slowsay("大概2000多年前吧，很奇怪，在这儿不用吃不用喝你都能活的好好的，不过每天都只能一直走，一直走，一直走……走到你心力交瘁也停不下来\n");
	Sleep(1000);
	Slowsay("“难道，你一直走了两千多年啦？！”\n");
	Sleep(1000);
	Slowsay("“是的”\n");
	Sleep(2000);
	Slowsay("“╮(╯▽╰)╭，人世间悲惨的事情太多了~~~”\n");
	Sleep(1000);
	Slowsay("不过，只要回答出墙上的那道题，我们就可以解放了，但是请记住，有且只有一次机会——知道答案后大声喊出就行了\n");
	Sleep(1000);
	Slowsay("你看了看墙上，上面写着——");
	int app=rand()%5;
	Slowsay(Tm[app]);
	cout<<endl;
	Sleep(1000);
	int ans; 
	cin>>ans;
	int sum=answer[app];
	Sleep(1000);
	Slowsay("你大声喊出了");
	cout<<ans;
	Sleep(500);
	system("cls");
	Sleep(1000);
	Slowsay("突然，地动山摇\n");
	Sleep(1000);
	if(ans!=sum) {
		Slowsay("一声刺耳而遥远的声音传来：");
		Sleep(1000);
		Slowsay("回答错误！！！！！\n");
		Sleep(1000);
		system("cls");
		return false;
	}
	system("cls");
	Sleep(1000);
	Slowsay("哗啦——地面开裂，所有人都掉了下去……\n");
	Sleep(2000);
	system("cls");
	Slowsay("当你晕晕乎乎地站起来时，发现四周一片漆黑\n");
	Sleep(2000);
	Slowsay("当你看见其他人也站起来时，突然闻到一股腐烂的臭气…………\n");
	Sleep(3000);
	char k;
	ganma:
	system("cls");
	Slowsay("你要干嘛？   1，悄悄离开    2，原地不动\n");
	cin>>k;
	if(k!='1'&&k!='2') {
		goto ganma;
	}
	if(k=='1') {
		Sleep(1000);
		Slowsay("你悄悄地离开了……\n");
		Sleep(2000);
		system("cls");
		int klkl=rand()%2;
		if(klkl==0) {
			Slowsay("突然，你脚下一空，落入了无边黑暗……\n");
			Sleep(1000);
			system("cls");
			return false;
		}
		if(klkl==1) {
			Slowsay("你悄悄地往前走，这时，从后面突然传来一阵喊声：“少了一个人！”\n");
			Sleep(2000);
			Slowsay("紧接着，你感到一股拉力，把你使劲拉了回去……");
			Sleep(1000);
			Slowsay("啊啊啊啊啊啊啊啊啊啊啊啊——————————\n");
			Sleep(2000);
			system("cls");
			Slowsay("突然，你发现了一个“人”站在你面前……\n");
		}
	} else {
		Sleep(1000);
		Slowsay("你正在纳闷儿，一个身影便飘了过来~\n");
		Sleep(1000);
		system("cls");
		Sleep(1000);
	}
	Sleep(1000);
	Slowsay("它身披黑色斗篷，黑色的帽子遮住了它的脸，却隐约有一道利剑一般的光从里面射出来\n");
	Sleep(1000);
	Slowsay("它手握镰刀，而露出来的手掌，却没有血肉，只是白森森的骨头……\n");
	Sleep(1000);
	system("cls");
	Slowsay("这形象，使你联想到——死神！！\n");
	Sleep(2000);
	system("cls");
	Slowsay("“哟，终于解放了，我这就带你们去地狱吧！”\n");
	Sleep(1000);
	Slowsay("你感到一股寒意，而别人却说：“对呀，我们是几千年前就到这里了，现在早就死了。走，咱们不用再接受酷刑了，去地狱吧！\n”");
	Sleep(1000);
	Slowsay("于是，你大喊：“喂，我还是活人呢，我才刚进来！”\n");
	Sleep(1000);
	Slowsay("“哎呀呀，别啰嗦了，走，出发吧！”\n");
	Sleep(500);
	Slowsay("“不，不要————”\n");
	Sleep(2000);
	system("cls");
	Sleep(5000);
	Slowsay("猛地睁开眼睛，呼~原来是一场梦啊\n");
	Sleep(1000);
	return true;
}
void Bag()
{
	define:
		system("cls");
		int flag=1;
		jindu(50);
		Slowsay("武器：\n");
		for(int i=0; i<=bag; i++) {
			if(wuqi[i]=="00") {
				break;
			}
			if(wuqi[i]=="00") {
				continue;
			}
			if(a_f[i]==true) {
				cout<<flag<<": ";
				flag++;
				Slowsay(wuqi[i]);
				Slowsay("   等级：");
				cout<<wuqiLV[i];
				Slowsay("   攻击力：");
				cout<<xinneng[i];
				cout<<endl;
			}
		}
		cout<<endl;
		flag=1;
		Slowsay("防具：\n");
		for(int i=0; i<=bag; i++) {
			if(wuqi[i]=="00") {
				cout<<endl;
				break;
			}
			if(wuqi[i]=="00") {
				continue;
			}
			if(a_f[i]==false) {
				cout<<flag<<": ";
				flag++;
				Slowsay(wuqi[i]);
				Slowsay("   等级：");
				cout<<wuqiLV[i];
				Slowsay("   防御力：");
				cout<<xinneng[i];
				cout<<endl;
			}
		}
		cout<<endl;
		Slowsay("药水：\n");
		for(int i=0;i<=bag1;i++) {
			if(yaoshui[i]=="00") {
				break;
			}
			cout<<i+1<<": ";
			switch(yaoshuixiao[i]) {
				case 1:
					say("小瓶生命药水  瞬间回复400~500滴血\n");
					break;
				case 2:
					say("中瓶生命药水  瞬间回复800~1000滴血n");
					break;
				case 3:
					say("大瓶生命药水  瞬间回复1400~1800滴血\n");
					break;
				case 4:
					say("特大生命药水  瞬间回复2200~3000滴血\n");
					break;
				case 5:
					say("小瓶魔法药水  瞬间回复150~250魔法值\n");
					break;
				case 6:
					say("中瓶魔法药水  瞬间回复450~650魔法值\n");
					break;
				case 7:
					say("大瓶魔法药水  瞬间回复950~1250魔法值\n");
					break;
				case 8:
					say("特大魔法药水  瞬间回复1650~2150魔法值\n");
					break;
				case 9:
					say("元气恢复药水  瞬间回复4000~5000滴血与魔法值\n");
					break;
				case 10:
					say("巨灵药水     瞬间回复满所有血与魔法值\n");
					break;
			}
		}
		cout<<endl;
		Slowsay("道具：\n\n");
		Slowsay("木头：");cout<<mu<<endl;
		Slowsay("生铁：");cout<<sheng<<endl;
		Slowsay("钢铁：");cout<<gang<<endl<<endl;
		for(int i=0; i<=bag2; i++) {
			if(daoju[i]=="00") {
				break;
			}
			cout<<i+1<<":";
			cout<<daoju[i]<<endl;
		}
		cout<<endl;
		cout<<endl<<endl<<endl;
		Slowsay("玩家名：");
		cout<<name<<endl;
		Slowsay("角色：");
		cout<<juese<<endl;
		Slowsay("血量:");
		cout<<HP<<endl;
		Slowsay("魔法值：");
		cout<<MP<<endl;
		Slowsay("攻击力：");
		cout<<ATK<<endl;
		Slowsay("等级：");
		cout<<LV<<endl; 
		Slowsay("防御力：");
		cout<<fang<<endl;
		Slowsay("经验值：");
		cout<<EXP<<endl;
		Slowsay("距离升级还有：");
		cout<<maxEXP;
		Slowsay("经验值");
		cout<<endl<<endl;
		Slowsay("金币：");
		cout<<jinbi<<endl;
		Slowsay("国王币：");
		cout<<G<<endl;
		cout<<"\n\n\n\n\n\n";
		Slowsay("已装备武器：");
		Slowsay(zhuangbeiwuqi);
		Slowsay("   攻击力：");
		cout<<zhuangbeia<<endl<<endl;
		Slowsay("已装备防具：");
		Slowsay(zhuangbeifangju);
		Slowsay("   防御力：");
		cout<<zhuangbeif<<endl<<endl;
		Slowsay("\n\n\n\n");
		Slowsay("1,装备武器/防具\n");
		Slowsay("2,卖装备\n");
		Slowsay("3,返回\n");
		Sleep(1000);
		Slowsay("请选择：");
		char pop;
		cin>>pop;
		if(pop=='1') {
beginning:
			cout<<endl<<endl;
			Slowsay("请输入您要装备的武器或防具的序号，-1返回\n");
			for(int i=0; i<=bag-1; i++) {
				cout<<i+1<<"：";
				cout<<wuqi[i]<<"  ";
				if(a_f[i]) {
					Slowsay("攻击力：");
					cout<<xinneng[i]<<endl;
				} else {
					Slowsay("防御力：");
					cout<<xinneng[i]<<endl;
				}
			}
			int tyd;
			cin>>tyd;
			if(tyd==-1)
			{
				goto define;
			}
			if(tyd>bag||tyd<=0) {
				Slowsay("当前序号不可用，请重试！");
				Sleep(1000);
				system("cls");
				goto beginning;
			}
			if(a_f[tyd-1]) {
				zhuangbeiwuqi=wuqi[tyd-1];
				zhuangbeia=xinneng[tyd-1];
			} else {
				zhuangbeifangju=wuqi[tyd-1];
				zhuangbeif=xinneng[tyd-1];
			}
			pct=Is_pct[tyd-1];
			Slowsay("替换成功！");
			Sleep(1000);
			return ;
		}
		if(pop=='2') {
			Slowsay("对不起，此功能未开起，作者正在进一步开发中……\n");
			Sleep(1000);
			return ;
		}
		if(pop=='3') {
			return ;
		}
		if(pop!='1'||pop!='2'||pop!='3') {
			Slowsay("请输入1——3内的整数！！");
			Sleep(1000);
			goto define;
		}
	system("cls");
}
bool choose()
{
	system("cls");
	Sleep(1000);
	tiaose(10); 
	int lxl=rand()%50;
	if(lxl>=20)
	{
		Slowsay("这里什么也没有......\n");
		Sleep(1500);
		system("cls");
		return true;
	}
	if(lxl>=4&&lxl<10)
	{
		Slowsay("你遭到天打雷劈，血量上限-50！");
		maxHP-=50;
		HP-=50;
		if(maxHP<=0)
		{
			Sleep(2000);
			Slowsay("您的RP太低惹，您被天雷炸死惹。。。\n\n");
			Sleep(1500);
			return false;
		}
	}
	if(lxl>=10&&lxl<15)
	{
		Slowsay("你找到了一些金币！！\n");
		Sleep(1000);
		system("cls");
		int add=rand()%4501;
		jinbi+=add;
		Slowsay("获得金币×");
		cout<<add;
	}
	if(lxl>=15&&lxl<20)
	{
		Slowsay("你找到了血瓶！！血量上限+100！");
		maxHP+=100;
		HP+=100;
	}
	if(lxl==1&&Wpass>=5)
	{
		Slowsay("这里什么也没有......\n");
		Sleep(1000);
		return true;
	}
	switch(lxl)
	{
		case 0:{
			Slowsay("插在地上的传奇武器\n\n");
			Slowsay("只有有缘分的人，才能拔出来\n");
			Sleep(500);
			Slowsay("Enter键试着拔出...");
			getline(cin,s);
			int bc=rand()%5;
			if(bc==0)
			{
				Slowsay("很遗憾，您未能拔出此武器……\n");
				Sleep(1000);
				break;
			}
			if(bag>9)
			{
				Slowsay("很遗憾，由于您的背包空间不足，无法接受此武器……\n");
				Sleep(2000);
				break;
			}
			int what_arms;
			Slowsay("恭喜您，获得了传奇武器：");
			if(juese=="狂战士")
			{
				Slowsay(legend_arms[1]);
				what_arms=1;
			}
			if(juese=="圣骑士")
			{
				Slowsay(legend_arms[0]);
				what_arms=0;
			}
			if(juese=="刺客")
			{
				Slowsay(legend_arms[2]);
				what_arms=2;
			}
			if(juese=="法师")
			{
				Slowsay(legend_arms[3]);
				what_arms=3;
			}
			Sleep(1000);
			system("cls");
			Slowsay("当前武器与已装备武器比较：");
			cout<<endl<<endl;
			Slowsay("当前武器：");
			Slowsay(legend_arms[what_arms]);
			cout<<endl;
			Slowsay("攻击力：");
			cout<<la_ATK[what_arms]<<endl<<endl;
			Slowsay("已装备武器：");
			Slowsay(zhuangbeiwuqi);
			cout<<endl;
			Slowsay("攻击力：");
			cout<<zhuangbeia<<endl<<endl;
			Slowsay("是否更换武器？\n");
			Slowsay("1,是   2,否\n");
			int ch13;
			cin>>ch13;
			if(ch13==1)
			{
				zhuangbeiwuqi=legend_arms[what_arms];
				zhuangbeia=la_ATK[what_arms];
			}
			tiaose(15);
			break;
		}
		case 1:{
			Slowsay("恭喜找到部分充值密码\n\n");
			Slowsay("充值密码的第");
			cout<<Wpass;
			Slowsay("位为");
			cout<<password[Wpass];
			Sleep(1500);
			cout<<endl<<endl;
			if(Wpass==5)
			{
				Slowsay("恭喜你，找全充值密码了！\n");
			}
			Wpass++;
			Sleep(1500);
			break;
		}
		case 2:{
			Slowsay("恭喜找到国王币宝箱\n\n");
			int g=rand()%1501;
			if(g==0){g++;}
			Slowsay("获得国王币×");
			cout<<g<<endl;
			G+=g;
			Sleep(1000);
			break;
		}
		case 3:{
			Slowsay("啊啊啊啊啊啊——\n");
			Sleep(100);
			system("cls");
			return mengjing();
		}
	}
	Sleep(1000); 
	system("cls");
	return true;
}
void Train_skill()
{
	TS:
	system("cls");
	jindu(50);
	for(int i=0;i<=3;i++)
	{
		cout<<i+1<<":"<<skill[choosejn][i]<<setw(16-skill[choosejn][i].size())<<"需"<<needJB[choosejn][i]<<"金币"<<endl;
	}
	cout<<endl;
	Slowsay("PS:其中，1,2为普通主动技能；3为必杀主动技能；4为被动技能\n\n");
	Slowsay("请输入您想修炼的技能，-1键返回           请注意：您还有");cout<<jinbi;Slowsay("金币\n");
	string chb;
	cin>>chb;
	if(chb!="-1"&&chb!="1"&&chb!="2"&&chb!="3"&&chb!="4")
	{
		goto TS;
	}
	if(chb=="-1")
	{
		return ;
	}
	int ch3=chb[0]-'0';
	if(jinbi<needJB[choosejn][ch3-1])
	{
		Slowsay("对不起，金币不足，无法修炼\n");
		return ;
	}
	if(Is_xl[ch3-1])
	{
		Slowsay("emmm,这个技能已经修炼过惹...\n");
		Sleep(1000);
		return ;
	}
	Is_xl[ch3-1]=true;
	jinbi-=needJB[choosejn][ch3-1];
	system("cls");
	Sleep(500);
	Slowsay("修炼成功！\n"); 
	Sleep(1000);
	system("cls");
}
void upgrade() {
	int lv=LV;
	while(EXP>=maxEXP) {
		EXP-=maxEXP;
		maxEXP+=uplevel;
		
		int upHP=0;
		int upMP=0;
		int upATK=0;
		int upfang=0;
		if(juese=="狂战士")
		{
			upHP+=int(uplevel*0.5);
			upMP+=int(uplevel*0.3);
			upATK+=int(uplevel*0.1);
			upfang+=int(uplevel*0.08);
		}
		if(juese=="圣骑士")
		{
			upHP+=int(uplevel*0.35);
			upMP+=int(uplevel*0.45);
			upATK+=int(uplevel*0.12);
			upfang+=int(uplevel*0.15);
		}
		if(juese=="刺客")
		{
			upHP+=int(uplevel*0.25);
			upMP+=int(uplevel*0.35);
			upATK+=int(uplevel*0.25);
			upfang+=int(uplevel*0.06);
		}
		if(juese=="法师")
		{
			upHP+=int(uplevel*0.15);
			upMP+=int(uplevel*0.6);
			upATK+=int(uplevel*0.35);
			upfang+=int(uplevel*0.04);
		}
		uplevel+=35;
		LV++;
		maxHP+=upHP;HP=maxHP;
		maxMP+=upMP;MP=maxMP;
		ATK+=upATK;fang+=upfang;
		for(int i=0;i<=3;i++)
		{
			needMP[choosejn][i]-=reduceMP[choosejn][i];
		}
	}
	if(LV==lv)
	{
		return ;
	}
	if(LV-lv!=0) {
		Is_up=true;
		Slowsay("\n\n恭喜你，成功升了");
		cout<<LV-lv;
		Slowsay("级\n");
	}
}
bool zhandou(string guai,int p) {
	getline(cin,s);
	getline(cin,s);
	HideCursor(0);
	Is_up=false;
	bool Is_win;
	int mHP,mATK;
	int kkksc;
	bool smapp=false;
	bool Is_fj=true;
	if(p<0)
	{	
		if(p==-10){guai="远古守卫者";mHP=30000;mATK=1000;}
		if(p==-20){guai="混沌精灵王";mHP=60000;mATK=2000;}
		if(p==-30){guai="暗影狩猎者";mHP=90000;mATK=3000;}
		if(p==-40){guai="梦魇";mHP=105000;mATK=4200;}
		if(p==-50){guai="阿修罗";mHP=165000;mATK=5500;}
		if(p==-5){guai="克拉尔";mHP=2500;mATK=325;}
		if(p==-2){guai="???",mHP=24000,mATK=1500;}
	}else{
		mHP=monsterHP[p];
		mATK=monsterATK[p];
	}
	int mywz=33;
	int youwz=84;
	int now1=HP/17;
	int now2=mHP/17;
	int sum1=18;
	int sum2=18;
	int tmpHP=mHP;
	int TMPHP=HP;
	int TMPMP=MP;
	int dyHP1=int(HP*0.7);
	int dyHP2=int(HP*0.8);
	int dyATK1=int(ATK*0.8);
	int dyATK2=int(ATK*0.6);
	int dyfang1=int(fang*0.7);
	int dyfang2=int(fang*0.8);
	int SMHP=int(HP*0.72);
	int SMATK=int(ATK*0.45);
	int SMfang=int(fang*1.5);
	xuetiao();
	guangbiao(1,3);
	cout<<name;
	cout<<setw(117-name.size())<<guai<<endl;
	int tmpATK=ATK;
	int tmpfang=fang;
	int ToT=0;
	bool Is_poison=false;
	bool aldie1=true;
	bool aldie2=true;
	bool Is_buff=false;
	while(1)
	{	
		int size_HP=0;int tmp=HP;while(tmp!=0){tmp/=10;size_HP++;}
		int size_MP=0;tmp=MP;while(tmp!=0){tmp/=10;size_MP++;}
		MP+=int(TMPMP*0.08);
		if(MP>TMPMP)
		{
			MP=TMPMP;
		}
		hehe:
		Clear();
		guangbiao(1,5);
		cout<<"MP:";
		cout<<MP<<setw(112-size_MP);
		cout<<"MP:";
		cout<<0<<endl;
		cout<<" HP:";
		cout<<HP<<setw(112-size_HP);
		cout<<"HP:";
		cout<<mHP<<endl<<endl<<endl;
		qsay("请输入你要执行的操作：\n");
		qsay("1,攻击          2,使用药水&战斗道具          3,使用技能\n");
		char sh;
		cin>>sh;
		if(sh=='1')
		{
			int Is_bj=rand()%5;
			int kkk=rand()%(ATK/10);
			int atk=ATK+kkk;
			atk=max(0,atk);
			if(pct==true)
			{
				atk+=int(ATK*zhuangbeia*0.01);
			}
			else
			{
				atk+=zhuangbeia;
			}
			int reduce;
			if(Is_bj!=0)
			{
				mHP-=atk;
				if(now2-atk>0)
				{
					now2-=atk;
					reduce=0;
				}else{
					reduce=(atk-now2)/(tmpHP/17)+1;
					now2=(tmpHP/17)-(atk-now2)%(tmpHP/17);
				}
				qsay("你对");
				qsay(guai);
				qsay("造成了");
				cout<<atk;
				qsay("点伤害！\n");
			}
			else
			{
				atk*=baoji;
				atk=int(atk);
				mHP-=atk;
				qsay("暴击！\n");
				Sleep(350);
				qsay("你对");
				qsay(guai);
				qsay("造成了");
				cout<<atk;
				qsay("点伤害！\n");
				if(now2-atk>0)
				{
					now2-=atk;
					reduce=0;
				}else{
					reduce=(atk-now2)/(tmpHP/17)+1;
					now2=(tmpHP/17)-(atk-now2)%(tmpHP/17);
				}
			}
			if(mHP<=0)
			{
				system("cls");
				Sleep(250);
				stop_time+=10;
				Slowsay("you win！\n");
				stop_time-=10;
				Sleep(1000);
				if(p>=0&&p<=18)
				{
					jinbi+=monsterjinbi[p]+HP/5;
				}
				say("恭喜获得金币×");
				cout<<monsterjinbi[p]+HP/5<<endl;
				Sleep(1000);
				Is_win=true;
				break;
			}
			Sleep(500);
			guangbiao(youwz,1);
			for(int i=1;i<=reduce;i++)
			{
				cout<<"  ";
				youwz+=2;
				sum2--;
				if(sum2==1)
				{
					break;
				}
			}
			Clear();
			guangbiao(1,5);
			size_HP=0;tmp=HP;while(tmp!=0){tmp/=10;size_HP++;}
			size_MP=0;tmp=MP;while(tmp!=0){tmp/=10;size_MP++;}
			cout<<"MP:";
			cout<<MP<<setw(112-size_MP);
			cout<<"MP:";
			cout<<0<<endl;
			cout<<" HP:";
			cout<<HP<<setw(112-size_HP);
			cout<<"HP:";
			cout<<mHP<<endl;
		}
		if(sh=='2')
		{
			if(bag1==0)
			{
				qsay("你还没有药水&战斗道具！\n");
				Sleep(150);
				goto hehe;
			}
			haha:
			Clear();
			guangbiao(1,10);
			qsay("请输入你想使用的药水&战斗道具的序号：\n");
			for(int i=0;i<=bag1-1;i++)
			{
				cout<<i+1<<":"<<yaoshui[i]<<endl;
			}
			char sh1;
			cin>>sh1;
			if(sh1<'1'||sh1>bag1+'0')
			{
				goto haha;
			}
			sh1--;
			sh1=int(sh1-'0');
			if(yaoshui[sh1]=="00")
			{
				goto haha;
			}
			if(yaoshui[sh1]=="龙之卷轴")
			{
				Clear();
				guangbiao(1,10);
				int atk=ATK+rand()%(ATK/10);
				atk=max(0,atk);
				if(pct)
				{
					atk+=int(ATK*zhuangbeia*0.01);
				}
				else
				{
					atk+=zhuangbeia;
				}
				int reduce;
				bool win=false;
				for(int i=1;i<=8;i++)
				{
					mHP-=atk;
					if(now2-atk>0)
					{
						now2-=atk;
						reduce=-1;
					}else{
						reduce=(atk-now2)/(tmpHP/17)+1;
						now2=(tmpHP/17)-(atk-now2)%(tmpHP/17);
					}
					qsay("轰隆！\n");
					if(mHP<=0)
					{
						system("cls");
						Sleep(250);
						stop_time+=10;
						Slowsay("you win！\n");
						stop_time-=10;
						Sleep(1000);
						if(p>=0&&p<=18)
						{
							jinbi+=monsterjinbi[p]+HP/(TMPHP/100);
							Slowsay("恭喜获得金币×");
							cout<<monsterjinbi[p]+HP/10<<endl;
							Sleep(1000);
							win=true;
							break;
						}
						else
						{
							int add;
							switch(p)
							{
								case -5:{
									add=1000;
									break;
								}
								case -10:{
									add=2000;
									break;
								}
								case -20:{
									add=4000;
									break;
								}
								case -30:{
									add=6500;
									break;
								}
								case -40:{
									add=9500;
									break;
								}
								case -50:{
									add=15000;
									break;
								}
							}
							jinbi+=add+HP/5;
							Slowsay("恭喜获得金币×");
							cout<<add+HP/5<<endl;
							Sleep(1000);
							win=true;
							break;
						} 
					}
					ShakeWindow(25);
					Sleep(300);
					guangbiao(youwz,1);
					for(int j=1;j<=reduce;j++)
					{
						cout<<"  ";
						youwz+=2;
						sum2--;
						if(sum2==1)
						{
							break;
						}
					}
					guangbiao(1,10+i);
				}
				if(win){Is_win=true;break;}
			}
			if(yaoshui[sh1]=="巨灵药水")
			{
				MP=TMPMP;
				qsay("成功恢复满血量与魔法值\n");
				Sleep(100);
				if(HP!=TMPHP)
				{
					guangbiao(mywz,1);
					while(sum1<18)
					{
						cout<<"█";
						sum1++;
					}
					mywz=34;
					tiaose(14);
					guangbiao(1,10);
				}
				HP=TMPHP;
			}
			else
			{
				int t=SMP[yaoshui[sh1]];
				int add=t+rand()%(AMP[yaoshui[sh1]]);
				if(t==150||t==450||t==950||t==1650)
				{
					int k=MP;
					MP+t+add>TMPMP ? MP=TMPMP : MP+=t+add;
					Sleep(150);
					qsay("成功恢复");
					cout<<MP-k;
					qsay("魔法值\n");
					Clear();
					guangbiao(1,5);
					size_HP=0;tmp=HP;while(tmp!=0){tmp/=10;size_HP++;}
					size_MP=0;tmp=MP;while(tmp!=0){tmp/=10;size_MP++;}
					cout<<"MP:";
					cout<<MP<<setw(112-size_MP);
					cout<<"MP:";
					cout<<0<<endl;
					cout<<" HP:";
					cout<<HP<<setw(112-size_HP);
					cout<<"HP:";
					cout<<mHP<<endl<<endl<<endl;
				}
				else
				{
					int Tmp=HP;
					if(t==4000)
					{
						
						int Tmp=MP;
						MP+4000+add>TMPMP ? MP=TMPMP : MP+=4000+add;
						HP+4000+add>TMPHP ? HP=TMPHP : HP+=4000+add;
						qsay("成功恢复");
						cout<<HP-Tmp;
						qsay("滴血与");
						cout<<tmp;
						qsay("魔法值\n");
						Sleep(150);
					}
					else
					{
						HP+t+add>TMPHP ? HP=TMPHP : HP+=t+add;
						qsay("成功恢复");
						cout<<HP-Tmp;
						qsay("滴血\n");
						Sleep(150);
					}
					tiaose(2);
					guangbiao(mywz+1,1);
					if(HP-Tmp<(TMPHP/17)-now1)
					{
						now1+=(HP-Tmp);
						tiaose(14);
						guangbiao(1,10);
					}
					else
					{
						int reduce=(HP-Tmp-((TMPHP/17)-now1))/(TMPHP/17)+1;
						now1=(HP-Tmp-((TMPHP/17)-now1))%(TMPHP/17);
						for(int i=1;i<=reduce;i++)
						{
							cout<<"█";
							mywz+=2;
							sum1++;
							if(sum1==17)
							{
								break;
							}
						}
						mywz-=2;
						tiaose(14);
						guangbiao(1,10);
					}
					Clear();
					guangbiao(1,5);
					size_HP=0;tmp=HP;while(tmp!=0){tmp/=10;size_HP++;}
					size_MP=0;tmp=MP;while(tmp!=0){tmp/=10;size_MP++;}
					cout<<"MP:";
					cout<<MP<<setw(112-size_MP);
					cout<<"MP:";
					cout<<0<<endl;
					cout<<" HP:";
					cout<<HP<<setw(112-size_HP);
					cout<<"HP:";
					cout<<mHP<<endl<<endl<<endl;
				}
			}
			yaoshui[sh1]="00";
			bag1--;
		}
		if(sh=='3')
		{
			JN:
			Clear();
			guangbiao(1,5);
			size_HP=0;tmp=HP;while(tmp!=0){tmp/=10;size_HP++;}
			size_MP=0;tmp=MP;while(tmp!=0){tmp/=10;size_MP++;}
			cout<<"MP:";
			cout<<MP<<setw(112-size_MP);
			cout<<"MP:";
			cout<<0<<endl;
			cout<<" HP:";
			cout<<HP<<setw(112-size_HP);
			cout<<"HP:";
			cout<<mHP<<endl<<endl<<endl;
			guangbiao(1,10);
			if(!Is_xl[0]&&!Is_xl[1]&&!Is_xl[2])
			{
				qsay("你还没有修炼任何技能！\n");
				Sleep(100);
				continue;
			}
			qsay("请输入你想使用的技能，r键返回\n");
			for(int i=0;i<=2;i++)
			{
				cout<<i+1<<":"<<skill[choosejn][i]<<setw(25-skill[choosejn][i].size());
				if(Is_xl[i])
				{
					cout<<"已修炼   需耗"<<int(needMP[choosejn][i]*TMPMP*0.01)<<"点魔法值"<<endl;
				}else{
					cout<<"未修炼"<<endl;
				}
			}
			char ck;
			cin>>ck;
			if(ck=='r')
			{
				continue;
			}
			if(ck>'3'||ck<'1')
			{
				goto JN;
			}
			ck--;
			ck=int(ck-'0');
			if(!Is_xl[ck])
			{
				goto JN;
			}
			if(MP<int(needMP[choosejn][ck]*TMPMP*0.01))
			{
				qsay("魔法值不足，无法使用此技能！\n");
				Sleep(150);
				goto hehe;
			}
			bool LXL=true;
			MP-=int(needMP[choosejn][ck]*TMPMP*0.01);
			if(skill[choosejn][ck]=="身藏不露")
			{
				qsay("成功隐身\n");
				Is_fj=false;
				LXL=false;
				kkksc=1;
				continue;
			}
			if(skill[choosejn][ck]=="毒之深渊")
			{
				Is_poison=true;
				ToT=5;
			}
			if(skill[choosejn][ck]=="石魔召唤")
			{
				qsay("\n成功召唤石魔\n");
				Sleep(100);
				smapp=true;
				LXL=false;
			}
			if(skill[choosejn][ck]=="痊愈之光")
			{
				LXL=false;
				int reduce;
				int Tmp=HP;
				int(HP+ATK*3.25) > TMPHP ? HP=TMPHP : HP+=int(ATK*3.25);
				qsay("成功恢复");
				cout<<HP-Tmp;
				qsay("滴血\n");
				Sleep(100);
				tiaose(2);
				guangbiao(mywz,1);
				if(HP<TMPHP)
				{
					if(HP-Tmp<(TMPHP/17)-now1)
					{
						now1+=(HP-Tmp);
						guangbiao(1,10);
					}
					else
					{
						reduce=(HP-Tmp-((TMPHP/17)-now1))/(TMPHP/17);
						now1=(HP-Tmp-((TMPHP/17)-now1))%(TMPHP/17);
						for(int i=1;i<=reduce;i++)
						{
							cout<<"█";
							mywz+=2;
							sum1++;
							if(sum1==16)
							{
								break;
							}
						}
						guangbiao(1,10);
					}
				}
				else
				{
					while(sum1<17)
					{
						cout<<"█";
						sum1++;
					}
					mywz=34;
					tiaose(14);
					guangbiao(1,10);
				}
				tiaose(14);
			}
			if(LXL)
			{
				int reduce;
				int move=20;
				if(ck==2)
				{
					move+=15;
				}
				Sleep(100);
				ShakeWindow(move);
				Sleep(400);
				int tmp=(int)ATK*skillxn[choosejn][ck]*0.01;
				tmp+=rand()%(ATK/10);
				tmp=max(0,tmp);
				qsay("你对");
				qsay(guai);
				qsay("造成了");
				cout<<tmp;
				qsay("点伤害！");
				mHP-=tmp;
				if(now2-tmp>=0)
				{
					now2-=tmp;
				}
				else
				{
					reduce=(tmp-now2)/(tmpHP/17)+1;
					now2=(tmpHP/17)-(tmp-now2)%(tmpHP/17);
				}
				if(mHP<=0)
				{
					system("cls");
					Sleep(250);
					stop_time+=10;
					Slowsay("you win！\n");
					stop_time-=10;
					Sleep(1000);
					if(p>=0&&p<=18)
					{
						jinbi+=monsterjinbi[p]+HP/5;
					}
					say("恭喜获得金币×");
					cout<<monsterjinbi[p]+HP/5<<endl;
					Sleep(1000);
					Is_win=true;
					break;
				}
				guangbiao(youwz,1);
				for(int i=1;i<=reduce;i++)
				{
					cout<<"  ";
					youwz+=2;
					sum2--;
					if(sum2==1)
					{
						break;
					}
				}
				Clear();
				guangbiao(1,5);
				size_HP=0;tmp=HP;while(tmp!=0){tmp/=10;size_HP++;}
				size_MP=0;tmp=MP;while(tmp!=0){tmp/=10;size_MP++;}
				cout<<"MP:";
				cout<<MP<<setw(112-size_MP);
				cout<<"MP:";
				cout<<0<<endl;
				cout<<" HP:";
				cout<<HP<<setw(112-size_HP);
				cout<<"HP:";
				cout<<mHP<<endl;
			}
		}
		if(smapp)
		{
			int atk=SMATK+rand()%(SMATK/10);
			atk=max(0,atk);
			cout<<endl<<endl;
			qsay("石魔对");
			qsay(guai);
			qsay("造成了");
			cout<<atk;
			qsay("点伤害！\n");
			mHP-=atk;
			if(mHP<=0)
			{
				system("cls");
				Sleep(250);
				stop_time+=10;
				Slowsay("you win！\n");
				stop_time-=10;
				Sleep(1000);
				if(p>=0&&p<=18)
				{
					jinbi+=monsterjinbi[p]+HP/10;
				}
				say("恭喜获得金币×");
				cout<<monsterjinbi[p]+HP/10<<endl;
				Sleep(1000);
				Is_win=true;
				break;
			}
			int reduce;
			if(now2-atk>=0)
			{
				now2-=atk;
			}
			else
			{
				reduce=(atk-now2)/(tmpHP/17)+1;
				now2=(tmpHP/17)-(atk-now2)%(tmpHP/17);
				guangbiao(youwz,1);
				for(int i=1;i<=reduce;i++)
				{
					cout<<"  ";
					youwz+=2;
					sum2--;
					if(sum2==1)
					{
						break;
					}
				}
				Clear();
				guangbiao(1,5);
				size_HP=0;int tmp=HP;while(tmp!=0){tmp/=10;size_HP++;}
				size_MP=0;tmp=MP;while(tmp!=0){tmp/=10;size_MP++;}
				cout<<"MP:";
				cout<<MP<<setw(112-size_MP);
				cout<<"MP:";
				cout<<0<<endl;
				cout<<" HP:";
				cout<<HP<<setw(112-size_HP);
				cout<<"HP:";
				cout<<mHP<<endl;
			}
		}
		if(Is_poison&&ToT)
		{
			int atk=int(ATK*0.35);
			cout<<endl; 
			qsay(guai);
			qsay("遭受");
			cout<<atk;
			qsay("点毒素伤害！\n");
			Sleep(100); 
			ToT--;
			mHP-=atk;
			if(mHP<=0)
			{
				system("cls");
				Sleep(250);
				stop_time+=10;
				Slowsay("you win！\n");
				stop_time-=10;
				Sleep(1000);
				if(p>=0&&p<=18)
				{
					jinbi+=monsterjinbi[p]+HP/10;
				}
				say("恭喜获得金币×");
				cout<<monsterjinbi[p]+HP/10<<endl;
				Sleep(1000);
				Is_win=true;
				break;
			}
			int reduce;
			if(now2-atk>0)
			{
				now2-=atk;
				reduce=-1;
			}else{
				reduce=(atk-now2)/(TMPHP/17)+1;
				now2=(TMPHP/17)-(atk-now2)%(TMPHP/17);
				guangbiao(youwz,1);
				for(int i=1;i<=reduce;i++)
				{
					cout<<"  ";
					youwz+=2;
					sum2--;
					if(sum2==1)
					{
						break;
					}
				}
				youwz--;
			}
		}
		if(!Is_fj)
		{
			if(kkksc==1)
			{
				qsay("咦？人呢？\n\n");
			}
			else
			{
				qsay("…………\n\n");  
			}
			Sleep(100);
			qsay("敌方暂停一次攻击\n");
			Sleep(100);
			Is_fj=true;
			continue;
		}
		if(smapp)
		{
			int atk=mATK+rand()%(mATK/10)-SMfang;
			atk=max(0,atk);
			cout<<endl<<endl;
			qsay(guai);
			qsay("对石魔造成了");
			cout<<atk;
			qsay("点伤害！\n");
			SMHP-=atk;
			if(SMHP<=0)
			{
				qsay("\n石魔阵亡\n");
				smapp=false;
				Sleep(100);
			}
			continue;
		}
		cout<<endl;
		if(TD)
		{
			int who=rand()%(TD+1);
			int atk=mATK+rand()%(mATK/10);
			atk=max(0,atk);
			if(who==1&&assTD[0])
			{
				atk-=dyfang1;
				qsay(guai);
				qsay("对昆迪造成了");
				cout<<atk;
				qsay("点伤害！\n");
				dyHP1-=atk;
			}
			if(who==2&&assTD[1])
			{
				atk-=dyfang2;
				qsay(guai);
				qsay("对SuperHunter造成了");
				cout<<atk;
				qsay("点伤害！\n");
				Sleep(500);
				dyHP2-=atk;
			}
			if(dyHP1<0&&aldie1)
			{
				qsay("昆迪阵亡！\n");
				aldie1=false;
				TD--;
				assTD[1]=false;
			}
			if(dyHP2<0&&aldie2)
			{
				qsay("SuperHunter阵亡！\n");
				aldie2=false;
				TD--;
				assTD[2]=false;
			}
		}
		int atk=mATK+rand()%(mATK/10)-fang-zhuangbeif;
		int reduce;
		atk=max(0,atk);
		HP-=atk;
		if(now1-atk>0)
		{
			now1-=atk;
			reduce=-1;
		}else{
			reduce=(atk-now1)/(TMPHP/17)+1;
			now1=(TMPHP/17)-(atk-now1)%(TMPHP/17);
			
		}
		guangbiao(1,10);
		qsay(guai);
		qsay("对你");
		qsay("造成了");
		cout<<atk;
		qsay("点伤害！\n");
		int buff=rand()%5;
		
		if(HP<=0)
		{
			system("cls");
			Sleep(200);
			stop_time+=10;
			Slowsay("you lose！\n");
			Sleep(1000);
			system("cls");
			Slowsay("眼前的世界烟消云散...");
			Sleep(1500);
			stop_time-=10;
			Is_win=false;
			break;
		}
		for(int i=1;i<=reduce;i++)
		{
			guangbiao(mywz,1);
			cout<<"  ";
			mywz-=2;
			sum1--;
			if(sum1==1)
			{
				break;
			}
		}
		if(buff==0&&!Is_buff&&Is_xl[3])
		{
			guangbiao(1,14);
			qsay("成功激活技能：");
			Slowsay(skill[choosejn][3]);
			Sleep(500);
			Is_buff=true;
			HP+=int(HP*skillxn[choosejn][3]*0.01);
			MP-=int(MP*needMP[choosejn][3]*0.01);
			ATK+=int(ATK*skillxn[choosejn][3]*0.01);
			fang+=int(fang*skillxn[choosejn][3]*0.01);
		}
		Clear();
		guangbiao(1,5);
	}
	if(Is_win)
	{
		Slowsay("获得经验值×");
		if(p>=0&&p<=18)
		{
			
			EXP+=HP/10+monsterEXP[p];
		}
		else
		{
			if(p==-5)
			{
				EXP+=HP/10+250;
			}
			else
			{
				EXP+=HP/10+abs(p)*10;
			}
		}
		cout<<HP/10+monsterEXP[p];
		upgrade();
	}
	if(!Is_up)
	{
		HP=TMPHP;
		MP=TMPMP;
		fang=tmpfang;
		ATK=tmpATK;
	}
	HideCursor(1);
	dyHP1=int(HP*0.7);
	dyHP2=int(HP*0.8);
	dyATK1=int(ATK*0.8);
	dyATK2=int(ATK*0.6);
	dyfang1=int(fang*0.7);
	dyfang2=int(fang*0.8);
	Sleep(500);
	system("cls");
	return Is_win;
}
bool slt() {
sl:
	system("cls");
	Slowsay("请输入你要去的楼层，r键返回\n\n");
	Sleep(1000);
	cout<<"   ▂▂▂▂▂▂▂▂▂▂▂▂▂▂  \n"<<endl;
	cout<<"   ▏                          ▏\n"<<endl;
	cout<<"   ▏五层：阿修罗      80级↑  ▏\n"<<endl;
	cout<<"   ▂▂▂▂▂▂▂▂▂▂▂▂▂▂  \n"<<endl;
	cout<<"   ▏                          ▏\n"<<endl;
	cout<<"   ▏四层：梦魇        70级↑  ▏\n"<<endl;
	cout<<"   ▂▂▂▂▂▂▂▂▂▂▂▂▂▂  \n"<<endl;
	cout<<"   ▏                          ▏\n"<<endl;
	cout<<"   ▏三层：暗影狩猎者  60级↑  ▏\n"<<endl;
	cout<<"   ▂▂▂▂▂▂▂▂▂▂▂▂▂▂  \n"<<endl;
	cout<<"   ▏                          ▏\n"<<endl;
	cout<<"   ▏二层：混沌精灵王  50级↑  ▏\n"<<endl;
	cout<<"   ▂▂▂▂▂▂▂▂▂▂▂▂▂▂  \n"<<endl;
	cout<<"   ▏                          ▏\n"<<endl;
	cout<<"   ▏一层：远古守卫者  40级↑  ▏\n"<<endl;
	cout<<"▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂\n"<<endl;
	char ch20;
	cin>>ch20;
	if(ch20=='r')
	{
		return true;
	}
	if(ch20>'5'||ch20<'1') {
		say("请输入1——5内的整数！！\n");
		Sleep(1500);
		goto sl;
	}
	ch20=int(ch20-'0');
	if(LV<(ch20+3)*10) {
		Slowsay("对不起，由于当前层内怪物过于厉害，你无法进入，请达到");
		cout<<(ch20+3)*10;
		Slowsay("级以后再来\n");
		Sleep(2000);
	} else {
		bool jk;
		switch(ch20) {
			case 1 :{
				jk=zhandou("远古守卫者",-10);
				break;
			}
			case 2 : {
				jk=zhandou("混沌精灵王" ,-20);
				break;
			}
			case 3 : {
				jk=zhandou("暗影狩猎者",-30);
				break;
			}
			case 4 : {
				jk=zhandou("梦魇",-40);
				break;
			}
			case 5 : {
				jk=zhandou("阿修罗",-50);
				break;
			}
		}
		return jk;
	}
}
void shop() {
finish:
	jindu(50);
	cout<<endl;
	Slowsay("1,武器\n");
	Slowsay("2,药品\n");
	Slowsay("3,道具\n");
	Slowsay("4,防具\n");
	Slowsay("5,其他\n");
	Slowsay("6,返回\n");
	Sleep(550);
	Slowsay("请选择：");
	char ch3;
	cin>>ch3;
	if(ch3=='1') {
kaishi:
		jindu(50);
		cout<<endl;
		say("1,铁剑   攻击力+40  职业：狂战士 or 圣骑士 ￥100\n");
		say("2,钢铁刀 攻击力+75  职业：狂战士           ￥200\n");
		say("3,短剑   攻击力+65  职业：刺客             ￥100\n");
		say("4,木棒   攻击力+65  职业：法师             ￥100\n");
		say("5,长剑   攻击力+60  职业：圣骑士           ￥150\n");
		say("6,猎人刀 攻击力+105 职业：全部（除法师外） ￥350\n");
		say("7,魔棒   攻击力+120 职业：法师             ￥350\n");
		say("8,返回                  请注意：你还有");
		cout<<jinbi;
		Slowsay("金币\n");
		Sleep(1000);
		Slowsay("请选择：");
		char chn;
		cin>>chn;
		if(chn=='1'&&(juese=="狂战士"||juese=="圣骑士")&&jinbi>=100&&bag<9) {
			jinbi-=100;
			wuqi[bag]="铁剑";
			xinneng[bag]=40;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("已成功购买铁剑，前往背包即可装备");
			Sleep(2000);
			goto finish;
		}
		if(chn=='2'&&juese=="狂战士"&&jinbi>=200&&bag<9) {
			jinbi-=200;
			wuqi[bag]="钢铁刀";
			xinneng[bag]=75;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("已成功购买钢铁刀，前往背包即可装备");
			Sleep(2000);
			goto finish;
		}
		if(chn=='3'&&juese=="刺客"&&jinbi>=100&&bag<9) {
			jinbi-=100;
			wuqi[bag]="短剑";
			xinneng[bag]=65;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("已成功购买短剑，前往背包即可装备");
			Sleep(2000);
			goto finish;
		}
		if(chn=='4'&&juese=="法师"&&jinbi>=100&&bag<9) {
			jinbi-=100;
			wuqi[bag]="木棒";
			xinneng[bag]=65;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("已成功购买木棒，前往背包即可装备");
			Sleep(2000);
			goto finish;
		}
		if(chn=='5'&&juese=="圣骑士"&&jinbi>=100&&bag<9) {
			jinbi-=150;
			wuqi[bag]="长剑";
			xinneng[bag]=60;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("已成功购买长剑，前往背包即可装备");
			Sleep(2000);
			goto finish;
		}
		if(chn=='6'&&juese!="法师"&&jinbi>=350&&bag<9) {
			jinbi-=350;
			wuqi[bag]="猎人刀";
			xinneng[bag]=105;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("已成功购买猎人刀，前往背包即可装备");
			Sleep(2000);
			goto finish;
		}
		if(chn=='7'&&juese=="法师"&&jinbi>=200&&bag<9) {
			jinbi-=200;
			wuqi[bag]="魔棒";
			xinneng[bag]=120;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("已成功购买魔棒，前往背包即可装备");
			Sleep(2000);
			goto finish;
		}
		if(chn=='8') {
			goto finish;
		}
		Slowsay("对不起，无法执行此操作，可能因为职业不对、金币不足、背包空间不够或没有输入正确的数字，请重试\n");
		Sleep(3000);
		goto kaishi;
	}
	if(ch3=='2') {
youxi:
		jindu(50);
		qsay("1,小瓶生命药水  瞬间回复400~500滴血            ￥150\n");
		qsay("2,中瓶生命药水  瞬间回复800~1000滴血           ￥200\n");
		qsay("3,大瓶生命药水  瞬间回复1400~1800滴血          ￥250\n");
		qsay("4,特大生命药水  瞬间回复2200~3000滴血          ￥350(店长推荐)\n");
		qsay("5,小瓶魔法药水  瞬间回复150~250魔法值          ￥100\n");
		qsay("6,中瓶魔法药水  瞬间回复450~650魔法值          ￥150\n");
		qsay("7,大瓶魔法药水  瞬间回复950~1250魔法值         ￥200(店长推荐)\n");
		qsay("8,特大魔法药水  瞬间回复1650~2150魔法值        ￥300\n");
		qsay("9,元气恢复药水  瞬间回复4000~5000滴血与魔法值  ￥650(店长推荐)\n");
		qsay("10,巨灵药水     瞬间回复满所有血与魔法值       ￥1000(店长推荐)\n");
		qsay("11,返回                   请注意：你现在还有");
		cout<<jinbi;
		Slowsay("金币\n");
		Sleep(1000);
		say("请选择：");
		string ch4;
		cin>>ch4;
		if(ch4=="1"&&jinbi>=150&&bag1<9) {
			yaoshuixiao[bag1]=1;
			jinbi-=150;
			yaoshui[bag1]="小瓶生命药水";
			bag1++;
			cout<<endl;
			Slowsay("已成功购买小瓶生命药水\n");
			Sleep(1000);
			goto youxi;
		}
		if(ch4=="2"&&jinbi>=200&&bag1<9) {
			yaoshuixiao[bag1]=2;
			jinbi-=200;
			yaoshui[bag1]="中瓶生命药水";
			bag1++;
			cout<<endl;
			Slowsay("已成功购买中瓶生命药水\n");
			Sleep(1000);
			goto youxi;
		}
		if(ch4=="3"&&jinbi>=250&&bag1<9) {
			yaoshuixiao[bag1]=3;
			jinbi-=250;
			yaoshui[bag1]="大瓶生命药水";
			bag1++;
			cout<<endl;
			Slowsay("已成功购买大瓶生命药水\n");
			Sleep(1000);
			goto youxi;
		}
		if(ch4=="4"&&jinbi>=350&&bag1<9) {
			yaoshuixiao[bag1]=4;
			jinbi-=350;
			yaoshui[bag1]="特大生命药水";
			bag1++;
			cout<<endl;
			Slowsay("已成功购买特大生命药水\n");
			Sleep(1000);
			goto youxi;
		}
		if(ch4=="5"&&jinbi>=100&&bag1<9) {
			yaoshuixiao[bag1]=5;
			jinbi-=100;
			yaoshui[bag1]="小瓶魔法药水";
			bag1++;
			cout<<endl;
			Slowsay("已成功购买小瓶魔法药水\n");
			Sleep(1000);
			goto youxi;
		}
		if(ch4=="6"&&jinbi>=150&&bag1<9) {
			yaoshuixiao[bag1]=6;
			jinbi-=150;
			yaoshui[bag1]="中瓶魔法药水";
			bag1++;
			cout<<endl;
			Slowsay("已成功购买中瓶魔法药水\n");
			Sleep(1000);
			goto youxi;
		}
		if(ch4=="7"&&jinbi>=200&&bag1<9) {
			yaoshuixiao[bag1]=7;
			jinbi-=200;
			yaoshui[bag1]="大瓶魔法药水";
			bag1++;
			cout<<endl;
			Slowsay("已成功购买大瓶魔法药水\n");
			goto youxi;
		}
		if(ch4=="8"&&jinbi>=300&&bag1<9) {
			yaoshuixiao[bag1]=8;
			jinbi-=300;
			yaoshui[bag1]="特大魔法药水";
			bag1++;
			cout<<endl;
			Slowsay("已成功购买特大魔法药水\n");
			Sleep(1000);
			goto youxi;
		}
		if(ch4=="9"&&jinbi>=650&&bag1<9) {
			yaoshuixiao[bag1]=9;
			jinbi-=650;
			yaoshui[bag1]="元气恢复药水";
			bag1++;
			cout<<endl;
			Slowsay("已成功购买元气恢复药水\n");
			Sleep(1000);
			goto youxi;
		}
		if(ch4=="10"&&jinbi>=1000&&bag1<9) {
			yaoshuixiao[bag1]=10;
			jinbi-=1000;
			yaoshui[bag1]="巨灵药水";
			bag1++;
			cout<<endl;
			Slowsay("已成功购买巨灵药水\n");
			Sleep(1000);
			goto youxi;
		}
		if(ch4=="11") {
			goto finish;
		}
		Slowsay("对不起，无法执行此操作，可能因为金币不足、背包空间不够或没有输入正确的数字，请重试\n");
		goto youxi;
	}
	if(ch3=='3') {
fox:
		jindu(50);
		cout<<endl;
		say("1,木材*50：最常用的材料，可以用于强化装备、升级，合成普通装备等等，    ￥1500\n");
		say("2,生铁*20：较常见的材料，可以用于强化装备、升级，合成普通装备等等      ￥1200\n");
		say("3,钢铁*10：不常见的材料，可以用于强化装备、升级，合成普通装备等等      ￥1850\n");
		say("4,绿宝石*1：很不常见的材料，可用于可以用于高能强化装备、传奇升级等等   ￥11500\n");
		say("5,蓝宝石*1：特别不常见的材料，可用于可以用于高能强化装备、传奇升级等等 ￥22500\n");
		say("6,至圣的水晶*1：最不常见的材料，可用于合成终极宝藏                     ￥1000000\n");
		say("7,龙之卷轴*1：对敌人造成8次200%的伤害，并使敌人在下一回合无法进攻      ￥12500\n");
		say("8,返回                    请注意：你现在还有");
		cout<<jinbi;
		Slowsay("金币\n");
		Sleep(2000);
		Slowsay("请选择：");
		char ch5;
		cin>>ch5;
		if(ch5=='1'&&jinbi>=1500&&bag<9) {
			jinbi-=1500;
			daoju[bag2]="木材*50";
			mu+=50;
			bag2++;
			cout<<endl;
			Slowsay("已成功购买木材*50");
			Sleep(1000);
			goto fox;
		}
		if(ch5=='2'&&jinbi>=1250&&bag2<9) {
			jinbi-=1250;
			daoju[bag2]="生铁*20";
			sheng+=20;
			bag2++;
			cout<<endl;
			Slowsay("已成功购买生铁*20");
			Sleep(1000);
			goto fox;
		}
		if(ch5=='3'&&jinbi>=1850&&bag2<9) {
			jinbi-=1850;
			daoju[bag2]="钢铁*10";
			gang+=10;
			bag2++;
			cout<<endl;
			Slowsay("已成功购买钢铁*10");
			Sleep(1000);
			goto fox;
		}
		if(ch5=='4'&&jinbi>=11500&&bag2<9) {
			jinbi-=11500;
			daoju[bag2]="绿宝石";
			bag2++;
			cout<<endl;
			Slowsay("已成功购买绿宝石*1");
			Sleep(1000);
			goto fox;
		}
		if(ch5=='5'&&jinbi>=22500&&bag2<9) {
			jinbi-=22500;
			daoju[bag2]="蓝宝石";
			bag2++;
			cout<<endl;
			Slowsay("已成功购买蓝宝石*1");
			Sleep(1000);
			goto fox;
		}
		if(ch5=='6'&&jinbi>=1000000&&bag2<9) {
			jinbi-=1000000;
			daoju[bag2]="至圣的水晶";
			bag2++;
			cout<<endl;
			Slowsay("已成功购买至圣的水晶*1");
			Sleep(1000);
			goto fox;
		}
		if(ch5=='7'&&jinbi>=12500&&bag1<9) {
			jinbi-=12500;
			yaoshui[bag1]="龙之卷轴";
			bag1++;
			cout<<endl;
			Slowsay("已成功购买龙之卷轴*1");
			Sleep(1000);
			goto fox;
		}
		if(ch5=='8') {
			goto finish;
		}
		Slowsay("对不起，无法执行此操作，可能因为金币不足、背包空间不够或没有输入正确的数字，请重试\n");
		Sleep(2000);
		goto fox;
	}
	if(ch3=='4') {
hujia:
		jindu(50);
		qsay("1,皮革护甲套装   防御力+45   职业：任意             ￥200\n");
		qsay("2,铁制铠甲套装   防御力+135  职业：狂战士 or 圣骑士 ￥950\n");
		qsay("3,金制护甲套装   防御力+125  职业：法师 or 刺客     ￥850\n");
		qsay("4,轻型铠甲套装   防御力+245  职业：刺客             ￥1800\n");
		qsay("5,重型铠甲套装   防御力+325  职业：圣骑士           ￥2800\n");
		qsay("6,锁链护甲套装   防御力+225  职业：法师             ￥2000\n");
		qsay("7,钻石护甲套装   防御力+285  职业：狂战士           ￥2800\n");
		qsay("8,鳄鱼皮甲套装   防御力+205  职业：法师 or 刺客     ￥1700\n");
		qsay("9,束腰衬衫套装   防御力+255  职业：法师             ￥2400\n");
		qsay("10,返回                                  请注意，你还有");
		cout<<jinbi;
		say("金币\n");
		Sleep(2000);
		Slowsay("请选择：");
		string ch5;
		cin>>ch5;
		if(ch5=="1"&&jinbi>=200&&bag<9) {
			jinbi-=200;
			wuqi[bag]="皮革护甲套装";
			xinneng[bag]=45;
			wuqiLV[bag]=1;
			a_f[bag]=false;
			bag++;
			cout<<endl;
			Slowsay("已成功购买皮革护甲套装，前往背包即可装备");
			Sleep(2000);
			goto finish;
		}
		if(ch5=="2"&&jinbi>=950&&(juese=="狂战士"||juese=="圣骑士")&&bag<9) {
			jinbi-=950;
			wuqi[bag]="铁制铠甲套装";
			xinneng[bag]=135;
			wuqiLV[bag]=1;
			a_f[bag]=false;
			bag++;
			cout<<endl;
			Slowsay("已成功购买铁制铠甲套装，前往背包即可装备");
			Sleep(2000);
			goto finish;
		}
		if(ch5=="3"&&jinbi>=850&&(juese=="法师"||juese=="刺客")&&bag<9) {
			jinbi-=850;
			wuqi[bag]="金质护甲套装";
			xinneng[bag]=125;
			wuqiLV[bag]=1;
			a_f[bag]=false;
			bag++;
			cout<<endl;
			Slowsay("已成功购买金质护甲套装，前往背包即可装备");
			Sleep(2000);
			goto finish;
		}
		if(ch5=="4"&&jinbi>=1800&&juese=="刺客"&&bag<9) {
			jinbi-=1800;
			wuqi[bag]="轻型铠甲套装";
			xinneng[bag]=245;
			wuqiLV[bag]=1;
			a_f[bag]=false;
			bag++;
			cout<<endl;
			Slowsay("已成功购买轻型铠甲套装，前往背包即可装备");
			Sleep(2000);
			goto finish;
		}
		if(ch5=="5"&&jinbi>=2800&&juese=="圣骑士"&&bag<9) {
			jinbi-=2800;
			wuqi[bag]="重型铠甲套装";
			xinneng[bag]=325;
			wuqiLV[bag]=1;
			a_f[bag]=false;
			bag++;
			cout<<endl;
			Slowsay("已成功购买重型铠甲套装，前往背包即可装备");
			Sleep(2000);
			goto finish;
		}
		if(ch5=="6"&&jinbi>=2000&&juese=="法师"&&bag<9) {
			jinbi-=2000;
			wuqi[bag]="锁链护甲套装";
			xinneng[bag]=225;
			wuqiLV[bag]=1;
			a_f[bag]=false;
			bag++;
			cout<<endl;
			Slowsay("已成功购买锁链护甲套装，前往背包即可装备");
			Sleep(2000);
			goto finish;
		}
		if(ch5=="7"&&jinbi>=2800&&juese=="狂战士"&&bag<9) {
			jinbi-=2800;
			wuqi[bag]="钻石护甲套装";
			xinneng[bag]=285;
			wuqiLV[bag]=1;
			a_f[bag]=false;
			bag++;
			cout<<endl;
			Slowsay("已成功购买钻石护甲套装，前往背包即可装备");
			Sleep(2000);
			goto finish;
		}
		if(ch5=="8"&&jinbi>=1700&&(juese=="法师"||juese=="刺客")&&bag<9) {
			jinbi-=1700;
			wuqi[bag]="鳄鱼皮甲套装";
			xinneng[bag]=205;
			wuqiLV[bag]=1;
			a_f[bag]=false;
			bag++;
			cout<<endl;
			Slowsay("已成功购买鳄鱼皮甲套装，前往背包即可装备");
			Sleep(2000);
			goto finish;
		}
		if(ch5=="9"&&jinbi>=2400&&juese=="法师"&&bag<9) {
			jinbi-=2400;
			wuqi[bag]="束腰衬衫套装";
			xinneng[bag]=255;
			wuqiLV[bag]=1;
			a_f[bag]=false;
			bag++;
			cout<<endl;
			Slowsay("已成功购买束腰衬衫套装，前往背包即可装备");
			Sleep(2000);
			goto finish;
		}
		if(ch5=="10") {
			goto finish;
		}
		Slowsay("对不起，无法执行此操作，可能因为职业不对、金币不足、背包空间不够或没有输入正确的数字，请重试\n");
		Sleep(2000);
		goto hujia;
	}
	if(ch3=='5') {
		chuanqi:
		jindu(50);
		say("1,炎龙王之剑   攻击力+30%   职业：狂战士 or 圣骑士       $1000\n");
		say("2,魔龙王之剑   攻击力+35%   职业：狂战士 or 圣骑士       $1500\n");
		say("3,金刚宝剑     攻击力+40%   职业：圣骑士 or 刺客         $2000\n");
		say("4,地狱之刃     攻击力+50%   职业：刺客                   $3000\n");
		say("5,世界树神杖   攻击力+55%   职业：法师                   $4000\n");
		say("6,紫晶神符     攻击力+65%   职业：任意                   $5500\n");
		say("7,炫彩霸王剑   攻击力+100%  职业：狂战士 or 圣骑士       $10000\n");
		say("8,天国之杖/剑  攻击力+130%  职业：刺客 or 法师           $10000\n");
		say("9,充值\n");
		say("10,返回               请注意：你还有");
		cout<<G;
		Slowsay("国王币\n");
		Sleep(2000);
		Slowsay("请选择：");
		string ch6;
		cin>>ch6;
		if(ch6=="1"&&G>=1000&&(juese=="狂战士"||juese=="圣骑士")&&bag<9) {
			G-=1000;
			wuqi[bag]="炎龙王之剑";
			xinneng[bag]=30;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			Is_pct[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("已成功购买炎龙王之剑，前往背包即可装备");
			Sleep(2000);
			goto finish;
		}
		if(ch6=="2"&&G>=1500&&(juese=="狂战士"||juese=="圣骑士")&&bag<9) {
			G-=1500;
			wuqi[bag]="魔龙王之剑";
			xinneng[bag]=35;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			Is_pct[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("已成功购买魔龙王之剑，前往背包即可装备");
			Sleep(2000);
			goto finish;
		}
		if(ch6=="3"&&G>=2000&&(juese=="圣骑士"||juese=="刺客")&&bag<9) {
			G-=2000;
			wuqi[bag]="金刚宝剑";
			xinneng[bag]=40;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			Is_pct[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("已成功购买金刚宝剑，前往背包即可装备");
			Sleep(2000);
			goto finish;
		}
		if(ch6=="4"&&G>=3000&&juese=="刺客"&&bag<9) {
			G-=3000;
			wuqi[bag]="地狱之刃";
			xinneng[bag]=50;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			Is_pct[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("已成功购买地狱之刃，前往背包即可装备");
			Sleep(2000);
			goto finish;
		}
		if(ch6=="5"&&G>=4000&&juese=="法师"&&bag<9) {
			G-=4000;
			wuqi[bag]="世界树神杖";
			xinneng[bag]=55;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			Is_pct[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("已成功购买世界树神杖，前往背包即可装备");
			Sleep(2000);
			goto finish;
		}
		if(ch6=="6"&&G>=5500&&bag<9) {
			G-=5500;
			wuqi[bag]="紫晶神符";
			xinneng[bag]=65;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			Is_pct[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("已成功购买紫晶神符，前往背包即可装备");
			Sleep(2000);
			goto finish;
		}
		if(ch6=="7"&&G>=10000&&(juese=="狂战士"||juese=="圣骑士")&&bag<9) {
			G-=10000;
			wuqi[bag]="炫彩霸王剑";
			xinneng[bag]=100;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			Is_pct[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("已成功购买炫彩霸王剑，前往背包即可装备");
			Sleep(2000);
			goto finish;
		}
		if(ch6=="8"&&G>=10000&&juese=="法师"&&bag<9) {
			G-=10000;
			wuqi[bag]="天国之杖";
			xinneng[bag]=100;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			Is_pct[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("已成功购买天国之杖，前往背包即可装备");
			Sleep(2000);
			goto finish;
		}
		if(ch6=="8"&&G>=10000&&juese=="刺客"&&bag<9) {
			G-=10000;
			wuqi[bag]="天国之剑";
			xinneng[bag]=130;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			Is_pct[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("已成功购买天国之剑");
			Sleep(2000);
			goto finish;
		}
		if(ch6=="9") {
			chongzhi:
			bool q=true;
			jindu(50);
			cout<<endl;
			cout<<endl;
			Slowsay("                  请选择充值金额：\n");
			Slowsay("1,5元   2,10元   3,20元   4,50元   5,100元   6,500元   7,返回\n");
			Sleep(1000);
			Slowsay("请选择：");
			int jine;
			char ch7;
			cin>>ch7;
			if(ch7=='1') {
				jine=5;
				q=false;
			}
			if(ch7=='2') {
				jine=10;
				q=false;
			}
			if(ch7=='3') {
				jine=20;
				q=false;
			}
			if(ch7=='4') {
				jine=50;
				q=false;
			}
			if(ch7=='5') {
				jine=100;
				q=false;
			}
			if(ch7=='6') {
				jine=500;
				q=false;
			}
			if(ch7=='7') {
				goto chuanqi;
			}
			if(q) {
				Slowsay("对不起，无法执行此操作,请重试");
				goto chongzhi;
			}
			Slowsay("请输入您的密码：");
			string p="";
			cin>>p;
			Slowsay("正在检测，请稍后\n\n");
			Sleep(1500);
			system("cls");
			if(p!="ZTL巨学"&&p!="ztl巨学"&&p!="ztl大佬"
			        &&p!="ZTL大佬"&&p!="ZTLTQL") {
				Slowsay("对不起，您的密码不对，请重试");
				goto chongzhi;
			}
			jindu(50);
			Slowsay("充值成功");
			G+=jine*100;
			Sleep(1000);
			goto chuanqi;
		}
		if(ch6=="10") {
			goto finish;
		}
		Slowsay("对不起，无法执行此操作，可能因为职业不对、金币不足、背包空间不够或没有输入正确的数字，请重试\n");
		Sleep(2000);
		goto chuanqi;
	}
	if(ch3=='6') {
		return;
	}
	if(ch3>'6'||ch3<'1') {
		Slowsay("对不起，无法执行此操作，因为没有输入正确的数字，请重试\n");
		goto chuanqi;
	}
	system("cls");
}
void Inotia() {
	jindu(50);
	tiaose(9);
	cout<<"      ■    ■                              "<<endl;
	cout<<"  ■■■■■■■■                 ■    ■   "<<endl;
	cout<<"      ■    ■               ■   ■■■■■  "<<endl;
	cout<<"                           ■■■  ■    ■   "<<endl;
	cout<<"     ■      ■               ■      ■      "<<endl;
	cout<<"　　　 ■　■　　           ■■    ■■■■■ "<<endl;
	cout<<"         ■                ■ ■■    ■       "<<endl;
	cout<<"       ■  ■             ■  ■    ■■■■  "<<endl;
	cout<<"     ■      ■               ■   ■ ■  ■  "<<endl;
	cout<<"    ■        ■              ■  ■  ■■■  "<<endl;
	cout<<endl<<endl<<endl;
	cout<<"             ■  	   ■■■■■■■  "<<endl;
	cout<<"  ■     ■■■■■	      ■   ■     "<<endl;
	cout<<"■■■   ■  ■  ■   	 ■   ■   ■   ■"<<endl;
	cout<<"   ■    ■■■■■   	  ■  ■   ■  ■ "<<endl;
	cout<<" ■      ■  ■  ■   	    ■■   ■■   "<<endl;
	cout<<"   ■    ■■■■■   	      ■   ■     "<<endl;
	cout<<" ■                  	      ■   ■     "<<endl;
	cout<<"■■■■■■■■■■       ■■■■■■■  "<<endl; 
	Sleep(100);
	cout<<endl;
	tiaose(15);
	Slowsay("欢迎您再次光临！");
	tiaose(8);
}
bool chuangguan(int k,string Map[30]) {
	system("cls");
	string map[30];
	for(int i=0;i<=16;i++)
	{
		map[i]=Map[i];
	}
	system("cls");
	Sleep(2000);
	if(Is_first[k]) {
		Is_first[k]=false;
		if(k==11) {
			int sp=rand()%10;
			Slowsay("你走在充满阴气的石钟乳洞里，四周全是腐烂的死尸和阴森森的白骨，甚至还有些生锈的盔甲和断裂的刀，看样子之前有许多来讨伐巨岩魔王的勇士\n");
			Sleep(2000);
			Slowsay("但一想到巨岩魔王可能会从四面八方扑过来，你就忍不住打了一个激灵\n");
			Sleep(2000);
			system("cls");
			Slowsay("走着走着,前面出现了两条路，中间有一块破破烂烂的牌子，上面写着——\n\n");
			Slowsay("            勇敢的英雄啊，请遵从神的指引吧\n");
			say("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
			say("┃←←我旁边的是恶魔，      ┃恶魔说的话是半真半假，→→┃\n");
			say("┃←←它指引着死亡之路      ┃我旁边的不是成功之路  →→┃\n");
			say("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n\n\n");
			Sleep(1000);
			Slowsay("你要走那条路？   L/R\n");
			char f;
			cin>>f;
			if(f=='L') {
				Sleep(1000);
				system("cls");
				Sleep(1500);
				Slowsay("你坚定地向着你所信任的方向走去\n");
				Sleep(1000);
				Slowsay("这时，你发现前面有一个巨大的身影躺在地面上\n");
				Sleep(2000);
				Slowsay("你握紧武器，慢慢向那个身影靠过去……\n");
				Sleep(2000);
				Slowsay("你发现，那个身影竟是…………………………你苦苦寻找了多年的巨岩魔王！！\n");
				Sleep(1000);
				Slowsay("凑近，才看见，它身上被某种神秘的东西伤害过，这不像擦伤，也不像刺伤，更不想烧伤。看来打败巨岩魔王的武器是个很了不起的东西了\n");
				Sleep(1000);
				Slowsay("它旁边还有一个华丽的箱子，上面镶嵌着绿宝石，水晶，钻石，黄金。打开一看——");
				Sleep(1500);
				Slowsay("里面装着一张纸条，上面写着——\n");
				Sleep(2000);
				Slowsay("等待千年的勇士啊，巨岩魔王的宝藏已经被我拿走了，想拿回来的话，就来索加达山上来找我吧——记住，我是你的朋友，也是你的敌人\n");
				Sleep(3000);
				Slowsay("“索加达山脉不就是宝藏的归宿吗，这人让我们去那里干嘛？”\n");
				Sleep(1500);
				Slowsay("很久很久，一阵沉默………………\n");
				Sleep(2000);
				system("cls");
				Slowsay("“那么，咱们就去吧qwq”\n");
				Sleep(1000);
				Slowsay("“喂喂喂，我还没想好呢”\n");
				Sleep(1000);
				Slowsay("“唉，想啥想，走走走~出发！”\n");
				Sleep(1000);
				system("cls");
				Sleep(1000);
				Slowsay("索加达山脉地势高，山势险，爬起来可不是那么容易\n");
				Sleep(1000);
				Slowsay("你带上你的队友，去到了索加达山脉下\n");
				Sleep(1200);
				Slowsay("你们一边哼哧哼哧地爬着，一边观察山顶的情况\n");
				Sleep(1500);
				system("cls");
				Sleep(1000);
				Slowsay("“唔哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈啊哈哈啊哈哈哈哈哈哈哈……咳咳，咳咳，你终于来啦”");
				Sleep(1000);
				Slowsay("“是的，我们来了”\n");
				Sleep(1000);
				Slowsay("“哟，不错嘛，还带上了几个帮手，只是，哼哼~~”\n");
				Sleep(2000);
				Slowsay("“快把宝藏交出来！”\n");
				Sleep(1000);
				Slowsay("“想要宝藏，先过我这一关，喝啊!”\n");
				Sleep(1500);
				Slowsay("那人冲了上来！就在你还愣在原地的时候，昆迪一个饿虎扑食，使用剑挡住了强大的攻击，双剑相撞，迸发出耀眼的火花，紧接着牛仔掏出弓箭，“嗖嗖”地射出两只箭，但敌人轻轻一挥剑将箭打掉了，武士在旁边一块巨石一刀砍倒，石块“轰隆”一声砸在了那人头上，浮起一层层灰尘\n");
				Sleep(2000);
				Slowsay("三人的动作一气呵成，看得你目瞪口呆\n");
				Sleep(1000);
				Slowsay("“呵呵，没啥的，就是反应快点就行了，好了，不说了，赶紧找宝藏吧”\n");
				Sleep(2000);
				system("cls");
				Slowsay("“哼哼，你们以为我是这么容易被打败的吗？太天真了！”\n");
				Sleep(500);
				Slowsay("这时，石头“啪”一声碎了，那人走了出来……\n");
				Sleep(2000);
				if(zhandou("???",-2)) {
					Slowsay("“不……不可能！我怎么会轻易被你们这些垃圾打败？！”\n");
					Sleep(1000);
					Slowsay("“哼，我已经告诉你了（好像没有……），团结才是力量，像你这种孤僻的人，再厉害，也顶不过一个团队的攻击，三个臭皮匠赛过诸葛亮。呵呵，不听老人言，吃亏在眼前！拜拜”\n");
					Sleep(500);
					Slowsay("“不，不————”\n");
					Sleep(1000);
					Slowsay("“轰隆————”\n");
					Sleep(4000);
					system("cls");
					Slowsay("“~\(≧▽≦)/~,我们赢了！地球有救了！！”\n");
					Sleep(3000);
					system("cls");
					Slowsay("“现在还不是欢呼的时候，要赶紧找到宝藏才行！”\n");
					Sleep(1000);
					Slowsay("“嘿，你们看，是不是这个!”\n\n\n");
					Sleep(1000);
					Slowsay("昆迪说着举起了一把长剑\n");
					Sleep(2000);
					Slowsay("\n\n");
					Slowsay("“不是吧，是这个吧”\n");
					Sleep(1000);
					Slowsay("SuperHunter举起了一把弯刀\n");
					Sleep(2000);
					Slowsay("\n\n");
					Slowsay("“嘿，这里还有一把！”\n");
					Sleep(1000);
					Slowsay("地上躺着一把方天戟\n");
					Sleep(2000);
					system("cls");
					Slowsay("(⊙v⊙)嗯……到底是哪个啊？\n");
					Sleep(1000);
					system("cls");
					Slowsay("“哼，肯定是哪个不要脸的家伙弄出来整我们的把戏！”\n");
					Sleep(1000);
					Slowsay("“就是就是，说不定拿错了整个地球就轰隆一声灰飞烟灭！”\n");
					Sleep(2000);
					system("cls");
					Slowsay("这时，众人的目光都转向了你\n");
					Sleep(1000);
					Slowsay("“干……干嘛？别这样看着我……”\n");
					Sleep(1000);
					Slowsay("“");
					Slowsay(name);
					Slowsay("，你还记得长老说的话吗？你才是这个世界的救世主，一切皆由你来决定，我们的任务只是保护你而已”\n");
					Sleep(2500);
					Slowsay("“嗯，好吧”\n");
					Sleep(1000);
					system("cls");
					Slowsay("你仔细看了看三把武器：\n");
					say("1，长剑    长满铁锈，但剑刃还是颇为锋利，而剑柄上也清晰的刻着几条龙\n");
					say("2，弯刀    刀柄和刀刃都是没有任何的花纹装饰，而且有些地方还有磨损\n");
					say("3，方天戟  长达两米左右，手柄处有一些象形文字，拿起来很重，杀伤力看起来蛮大的\n");
					Sleep(2000);
					Slowsay("你要选择哪一把武器投入古井？\n");
					char last;
					cin>>last;
					if(last=='1') {
						Sleep(2000);
						system("cls");
						Slowsay("“啊，全身都好痛啊，难道……我要死了吗？”\n");
						Sleep(2500);
						system("cls");
						The_end(3);
					} else {
						system("cls");
						Sleep(1500);
						Slowsay("只听井底传来一声“咣当”，几十秒后，一个影子从井底蹦出，接着，你便什么也不知道了……\n"); 
						Sleep(2000);
						system("cls");
						The_end(2);
					}
				
					Is_end=true;
				} else {
					system("cls");
					Slowsay("“哈哈哈，果然不出我所料，你就是一个不知天高地厚的家伙，告诉你，想当英雄没那么容易，哈哈哈，再见啦！”\n");
					Sleep(2500);
					system("cls");
					Slowsay("“咔兹...”\n");
					Sleep(2000);
					system("cls");
					Slowsay("“我……我就这么死了吗？”\n");
					Sleep(2000);
					Wend=false;
					return false;
				}
			} else {
				Sleep(2000);
				system("cls");
				Sleep(1500);
				Slowsay("你坚定地想着你所信任的方向走去\n");
				Sleep(1500);
				system("cls");
				Slowsay("这时，你就看见了巨岩魔王正气势汹汹的站在你们面前\n");
				Sleep(1000);
				system("cls");
				Slowsay("“谁敢入侵我的神圣领域？我警告你们：曾有许多蠢货入侵这里——他们都已经死啦！\n");
				Sleep(1500);
				Slowsay("“看来，你也想成为这些家伙中的一员，哈哈哈，那你就试试吧”\n");
				Sleep(1000);
				if(zhandou("巨岩魔王",17)) {
					Sleep(2500);
					Slowsay("“哼，你小子不错嘛，是时候见证我真正的在洞穴中修炼千年的结果了，呀哈————”\n");
					Sleep(1500);
					Slowsay("这时，平地暴起一阵红光——来自地狱的力量——全部植入到巨岩魔王的体内了！！！\n");
					Sleep(2000);
					Slowsay("“告诉你，当英雄没那么容易，别逞强了，哈哈！！我不用任何武器就可以剁了你们”\n");
					Sleep(2000);
					system("cls");
					Slowsay("这时，你发现了一旁有一个华丽的箱子……\n");
					Sleep(1000);
					system("cls");
					Slowsay("“不行，不能这样坐以待毙，我们是这个世界最后的希望，必须想想办法！！”\n");
					Sleep(1000);
					Slowsay("“那怎么办，逃命吗，洞口已经被封上了！！”\n");
					Sleep(1000);
					Slowsay("“不，");
					Slowsay(name);
					Slowsay("，你才是这个世界的真正救星，我们却不是，你才拥有拯救世界的力量，而我们没有，所以……”\n");
					Sleep(1000);
					system("cls");
					Slowsay("“所以你的意思是，让我一个人去击杀巨岩魔王，你们在一旁坐在板凳上吃瓜是吗？！”\n");
					Sleep(500);
					Slowsay("“不是，你正好说反了，我们去当诱饵，你保护好僵化解除剂的配方，我们去打，你就找个机会使用你的必杀技，一击就打败它”\n");
					Sleep(1500);
					system("cls");
					Slowsay("“所以你刚才说的那句话有什么用呢？”\n\n");
					Sleep(1000);
					Slowsay("“哎呀，别在意小细节啦”\n");
					Sleep(1500);
					system("cls");
					Slowsay("这时，巨岩魔王已经吸足了地狱的力量，大吼一声向你们冲来\n");
					Sleep(500);
					Slowsay("“执行计划！”\n");
					Sleep(500);
					Slowsay("昆迪、SuperHunter一起冲了上去，而你却在一旁，握紧了僵化解除剂制作配方，寻找偷袭的好时机\n");
					Sleep(1000);
					Slowsay("这时，巨岩魔王一挥硕大的拳头，砰一声，打在了SuperHunter的护盾上，瞬间，护盾被击碎，他也呈弧线状地起飞了，接着便重重地摔在10米开外的地上\n");
					Sleep(1000);
					Slowsay("“不！！！”你跳起来，");
					if(juese=="法师") {
						Slowsay("发射了一个巨大的火球……崩!!\n");
						Sleep(1000);
					} else {
						Slowsay("狠狠地给了巨岩魔王一记重击……砰!!\n");
						Sleep(1000);
					}
					Slowsay("它打了个踉跄，看来这一击它还吃不太消\n");
					Sleep(1000);
					Slowsay("但它却慢慢转过头来，一手抓住了你\n");
					Sleep(1000);
					system("cls");
					Slowsay("“噗啊啊……”\n");
					Sleep(1000);
					Slowsay("“哼哼，你原本也只是个窝囊废啊，永别了，救世主，哈哈哈！”\n");
					Sleep(2000);
					system("cls");
					Slowsay("这时，昆迪不知怎么的手上多了一把生锈的铁棍，而他脚边正是那个宝箱\n");
					Sleep(1000);
					system("cls");
					Slowsay("“这……这怎么可能？那个传说中的宝藏……”\n");
					Sleep(1000);
					system("cls");
					Slowsay("这时，巨岩魔王转过头来，阴险地笑了：“嘿嘿，我还以为是什么宝贝呢，搞得我都不敢碰，原来只是一根破铁棍啊，哈哈！！！”\n");
					Sleep(2500);
					system("cls");
					Slowsay("说着，就“砰”一声把你甩在墙上，然后“噗”地喷了一团硫酸僵化液……\n");
					Sleep(3000);
					system("cls");
					Slowsay("就在这时，昆迪手上的铁棍突然放射出万丈光芒，接着那根铁棍慢慢形成了一把剑的形状\n");
					Sleep(2000);
					system("cls");
					Slowsay("长空剑！\n");
					Sleep(2000);
					system("cls");
					Slowsay("昆迪立刻举起那把剑刃燃烧的宝剑，瞄准巨岩魔王的脑门，狠命一劈！\n");
					Sleep(2000);
					system("cls"); 
					Slowsay("当~~~\n");
					Sleep(1000);
					system("cls");
					Slowsay("“What the？”\n");
					Sleep(2000);
					Slowsay("巨岩魔王抽搐了一下，便倒在地上，");
					Sleep(1000);
					Slowsay("死了\n");
					Sleep(2000);
					system("cls");
					Slowsay("“不要哇……”这时，你鼻子以下的部位已经全部被僵化了……完了，全完了，虽然有解药配方，但又材料又不齐，且况他们又不知道索加达山脉在哪……\n");
					Sleep(2000);
					system("cls");
					Slowsay("恍惚间，昆迪走了过来，拿走了你的解药配方，说：“对不起，");
					Slowsay(name);
					Slowsay("，我们没能将你保护到底，但你放心，我们会制作出解药的，还有，即使走遍天涯海角，我们也要找到索加达山脉，然后拯救地球。永别了，祝你在天堂安息……”\n");
					Sleep(2000);
					Slowsay("接着昆迪便举起了剑……\n");
					Sleep(2000);
					system("cls");
					Slowsay("“咔擦”\n");
					Sleep(2000);
					system("cls");
					The_end(1);
					return true;
				}
				else
				{
					system("cls");
					Slowsay("“哈哈哈，果然不出我所料，你就是一个不知天高地厚的家伙，告诉你，想当英雄没那么容易，哈哈哈，再见啦！”\n");
					Sleep(2500);
					system("cls");
					Sleep(2000);
					system("cls");
					Slowsay("“我……我就这么死了吗？”\n");
					Sleep(2000);
					Wend=true;
					return false;
				}
			}
		}
	}
	HideCursor(0);
	int x;
	int y;
	for(int i=0;i<=16;i++)
	{
		for(int j=0;j<=23;j++)
		{
			if(map[i][j]=='O')
			{
				x=i;
				y=j;
			}
		}
	}
	bool Is_win=false;
	int p=rand()%6;
	draw(map,k,p);
	while(1) {
		HideCursor(0);
		if(map[x+1][y]=='g'||map[x][y+1]=='g'||map[x-1][y]=='g'||map[x][y-1]=='g')
		{
			system("cls");
			qsay("你邂逅了");
			qsay(monster[(k-1)*2]);
			qsay("！\n");
			Sleep(500);
			int mhp=monsterHP[(k-1)*2];
			if(zhandou(monster[(k-1)*2],(k-1)*2))
			{
				monsterHP[(k-1)*2]=mhp;
			}
			else
			{
				return false;
			}
			if(map[x+1][y]=='g'){map[x+1][y]=' ';}
			if(map[x][y+1]=='g'){map[x][y+1]=' ';}
			if(map[x-1][y]=='g'){map[x-1][y]=' ';}
			if(map[x][y-1]=='g'){map[x][y-1]=' ';}
			draw(map,k,p);
		}
		if(map[x+1][y]=='B'||map[x][y+1]=='B'||map[x-1][y]=='B'||map[x][y-1]=='B')
		{
			system("cls");
			qsay("你邂逅了");
			qsay(monster[(k-1)*2+1]);
			qsay("！\n");
			Sleep(200);
			int mhp=monsterHP[(k-1)*2+1];
			if(zhandou(monster[(k-1)*2+1],(k-1)*2+1))
			{
				monsterHP[(k-1)*2+1]=mhp;
			}
			else
			{
				return false;
			}
			if(map[x+1][y]=='B'){map[x+1][y]=' ';}
			if(map[x][y+1]=='B'){map[x][y+1]=' ';}
			if(map[x-1][y]=='B'){map[x-1][y]=' ';}
			if(map[x][y-1]=='B'){map[x][y-1]=' ';}
			draw(map,k,p);
		}
		if(map[x+1][y]=='S'||map[x][y+1]=='S'||map[x-1][y]=='S'||map[x][y-1]=='S')
		{
			Is_win=true;
			break;
		}
		if(map[x+1][y]=='?'||map[x][y+1]=='?'||map[x-1][y]=='?'||map[x][y-1]=='?')
		{
			system("cls");
			if(choose())
			{
				if(map[x+1][y]=='?'){map[x+1][y]=' ';}
				if(map[x][y+1]=='?'){map[x][y+1]=' ';}
				if(map[x-1][y]=='?'){map[x-1][y]=' ';}
				if(map[x][y-1]=='?'){map[x][y-1]=' ';}
			}
			else
			{
				return false;
			}
			draw(map,k,p);
		}
		if(map[x+1][y]=='M'||map[x][y+1]=='M'||map[x-1][y]=='M'||map[x][y-1]=='M')
		{
			shop();
			system("cls");
			map[x][y]=' ';
			x++;
			map[x][y]='O';
			draw(map,k,p);
		}
		if(map[x+1][y]=='F'||map[x][y+1]=='F'||map[x-1][y]=='F'||map[x][y-1]=='F')
		{
			system("cls");
			Slowsay("是否退出游戏？  Y/N\n");
			char ch;
			cin>>ch;
			if(ch=='y'||ch=='Y')
			{
				Inotia();
				POF();
				Sleep(1000);
				exit(0);
			}
			system("cls");
			map[x][y]=' ';
			x++;
			map[x][y]='O';
			draw(map,k,p);
		}
		if(map[x+1][y]=='N'||map[x][y+1]=='N'||map[x-1][y]=='N'||map[x][y-1]=='N')
		{
			system("cls");
			Slowsay("“年轻人，你是想前往试练塔打怪练级吗？”     Y/N\n");
			char ch;
			cin>>ch;
			if(ch=='Y'||ch=='y')
			{
				if(!slt())
				{
					return false;
				}
				x++;
			}
			system("cls");
			map[x][y]=' ';
			x++;
			map[x][y]='O';
			draw(map,k,p);
		}
		if(map[x+1][y]=='L'||map[x][y+1]=='L'||map[x-1][y]=='L'||map[x][y-1]=='L')
		{
			Train_skill();
			system("cls");
			map[x][y]=' ';
			x++;
			map[x][y]='O';
			draw(map,k,p);
		}
		if(map[x+1][y]=='H'||map[x][y+1]=='H'||map[x-1][y]=='H'||map[x][y-1]=='H')
		{
			Bag();
			system("cls");
			map[x][y]=' ';
			x++;
			map[x][y]='O';
			draw(map,k,p);
		}
		char a;
		a=getch();
		guangbiao(y+3,x+2);
		cout<<" ";
		if(a=='w'&&map[x-1][y]!='#')
		{
			map[x][y]=' ';
			map[x-1][y]='O';
			x--;
		}
		if(a=='s'&&map[x+1][y]!='#')
		{
			map[x][y]=' ';
			map[x+1][y]='O';
			x++;
		}
		if(a=='a'&&map[x][y-1]!='#')
		{
			map[x][y]=' ';
			map[x][y-1]='O';
			y--;
		}
		if(a=='d'&&map[x][y+1]!='#')
		{
			map[x][y]=' ';
			map[x][y+1]='O';
			y++;
		}
		guangbiao(y+3,x+2);
		cout<<'O';
	}
	HideCursor(1);
	return Is_win;
}
void Task()
{
	HideCursor(0);
	system("cls");
	Sleep(1000);
	getline(cin,s);
	if(!Can_into)
	{
		Slowsay("Now Task:");
		Slowsay(mission[rate]);
		Sleep(2000);
		HideCursor(1);
		system("cls");
		return ;
	}
	if(rate!=0)
	{
		Slowsay("任务完成，恭喜获得经验值×");
		cout<<reward[rate-1]<<endl;
		EXP+=reward[rate-1];
		upgrade();
	}
	Sleep(1000);
	system("cls");
	Slowsay("***\n");
	getline(cin,s);
	system("cls");
	switch(rate)
	{
		case 0:{
			Slowsay("“啊，勇者，你来了！”\n");
			getline(cin,s);
			Slowsay("“是的，我来了！我为世界而来了！”\n");
			getline(cin,s);
			Slowsay("“很好，有志气！那么，你是知道自己所肩负的重任的，对吧？”\n");
			getline(cin,s);
			Slowsay("“是的！”\n");
			getline(cin,s);
			system("cls");
			Slowsay("“现在正值沦陷岁月，你是这个世界的唯一希望了，为了人民，你必须胜利，明白吗？”\n");
			getline(cin,s);
			Slowsay("“明白！”\n");
			getline(cin,s);
			Slowsay("“好。我这里有一些我的祖先所留下的关于巨岩魔王的笔记。我祖先就是对阵巨岩魔王的第9578代人”\n");
			getline(cin,s);
			system("cls");
			Slowsay("“上面说，在距离我们这儿不远，有一个名叫霜风部落的地方，那里居住的是许久以前就和人类结下深厚友谊的兽人”\n");
			getline(cin,s);
			Slowsay("“你去找找他们的长老，与他商量商量接下来的对策”\n");
			getline(cin,s);
			system("cls"); 
			Slowsay("“那么，这本笔记就给你了，以便于和他们交流”\n");
			getline(cin,s);
			system("cls");
			Slowsay("获得：远古笔记（友谊的见证）\n");
			getline(cin,s);
			system("cls");
			Slowsay("“对了，出发前你可以去村里逛逛，顺便给你些金币，别忘了修炼技能与买点装备哈”\n");
			getline(cin,s);
			system("cls");
			Slowsay("获得金币×2000\n");
			jinbi+=2000;
			getline(cin,s);
			system("cls");
			Slowsay("“出发~~滚~~吧，勇士，去拯救世界！”\n");
			getline(cin,s);
			system("cls");
			tiaose(12);
			Slowsay("接收到任务：");
			Slowsay(mission[rate+1]);
			tiaose(14);
			Sleep(1500); 
			system("cls");
			Can_go[2]=true;
			rate++;
			Can_into=false;
			break;
		}
		case 1:{
			Can_go[5]=true;
			Slowsay("“怎么样？”\n");
			getline(cin,s);
			Slowsay("“嗯，长老说现在最好就立即出动击杀巨岩魔王”\n");
			getline(cin,s);
			Slowsay("“唔，那么，你有什么打算吗？”\n");
			getline(cin,s);
			Slowsay("“额，长老说巨岩魔王太为强大，现在我与它力量相差太悬殊了”\n");
			getline(cin,s);
			system("cls");
			Slowsay("“嗯，巨岩魔王的战斗力超群，非浪得虚名，曾经有许多讨伐它的人，都死光光了QAQ，你必须要等到与巨岩魔王能力相当的时候才有可能打败它，而且你有且仅有一次机会”\n");
			getline(cin,s);
			Slowsay("“那么$$骚$$的？”\n");
			getline(cin,s);
			Slowsay("“是的，所以，要有耐心，一步步来，你得先去打怪练练级……”\n");
			getline(cin,s);
			system("cls");
			Slowsay("“你知道Steve吗？”\n\n");
			getline(cin,s);
			Slowsay("当然，就是那个著名的探险家嘛，据说他在巨岩魔王入侵期间找到了一个法宝...\n");
			getline(cin,s);
			system("cls");
			Slowsay("说的没错，传言那是可以将巨岩魔王的灵魂摧毁的唯一法宝——长空剑\n\n");
			getline(cin,s);
			system("cls");
			Slowsay("“在危急时刻，这把剑会释放出强大的能量，但仅仅持续十秒，持剑人要在那十秒内将剑劈在敌人头上，敌人的脑袋就会开花结果”\n");
			getline(cin,s);
			system("cls");
			Slowsay("“只是这把剑早已失传了，不知道现在在谁的手里……”\n");
			getline(cin,s);
			system("cls");
			Slowsay("“也就是说我必须找到那把剑才有可能击败巨岩魔王？”\n\n");
			getline(cin,s);
			Slowsay("“我觉得那倒不一定，如果……”\n");
			getline(cin,s);
			system("cls");
			Slowsay("“不好了！不好了！”\n");
			getline(cin,s);
			system("cls");
			Slowsay("“发生什么事了？”\n");
			getline(cin,s);
			Slowsay("“不好了！南边的防护高墙被打破了，一大堆怪涌进了南边的田地，很快就要打到我们的村子了！”\n");
			getline(cin,s);
			system("cls");
			Slowsay("“这怎么会......快，叫村里强壮的男人都到田边死守，决不能让它们进来！”\n");
			getline(cin,s);
			Slowsay("“可是，怪物太多了，根本守不住”\n");
			getline(cin,s);
			Slowsay("“能守多久守多久，通知其他所有人前往避难所！”\n");
			getline(cin,s);
			Slowsay("“是！”\n");
			getline(cin,s);
			system("cls");
			Slowsay("“时间不多了，要是你被怪物当成夜宵，就惨了。来，过来”\n");
			getline(cin,s);
			Slowsay("“我给你找来了一个伙伴——SuperHunter。是我们村里面很厉害的一位猎人，讨伐巨岩魔王的途中他会助你一臂之力的！”\n");
			getline(cin,s);
			Slowsay("“哈喽”\n");
			TD++;
			getline(cin,s);
			system("cls");
			Slowsay("“我最后跟你说一句话：”\n");
			getline(cin,s);
			system("cls");
			Slowsay("“爱我们的人不会离开我们，他们永远活在我们的心中”\n");
			getline(cin,s);
			system("cls");
			Slowsay("“去吧，你的父母正在看着你呢”\n");
			getline(cin,s);
			system("cls");
			Slowsay("接受到任务：");
			Slowsay(mission[rate+1]);
			Sleep(1500);
			Can_go[1]=false;
			Can_into=false;
			break;
		}
	}
}
bool shuangfeng() {
	system("cls");
	if(Is_first[4]) {
		tiaose(14);
		getline(cin,s);
		Slowsay("***\n"); 
		getline(cin,s);
		system("cls");
		Slowsay("你走着走着，到了霜风部落的门口，突然——");
		getline(cin,s);
		system("cls");
		Slowsay("“站住！你是什么人？竟敢入侵我们部族！”\n");
		getline(cin,s);
		Slowsay("“你又是谁？”\n");
		getline(cin,s);
		Slowsay("“我乃霜风部落看守人克拉尔，你偷偷摸摸地来这干什么？！”");
		getline(cin,s);
		system("cls");
		Slowsay("“误会了兄弟，我只是过来与你们长老聊聊关于巨岩魔王的事”\n");
		getline(cin,s);
		Slowsay("“什么？！难不成你是巨岩魔王的间谍，胆敢来这放肆！”\n");
		getline(cin,s);
		Slowsay("“不是的不是的，我只是一个无辜的孩子而已>_<，大哥放过我吧~”\n");
		getline(cin,s);
		Slowsay("“少说废话，看招！”");
		if(!zhandou("克拉尔",-5)) {
			return false;
		}
		Is_first[4]=false;
		getline(cin,s);
		Slowsay("“看来，你还有两刷子嘛”\n");
		getline(cin,s);
		Slowsay("“我都说了，我是要来这儿见长老的”\n");
		getline(cin,s);
		system("cls");
		Slowsay("“好吧，我带你进去”\n");
		Sleep(1000);
		system("cls");
		Sleep(1000);
		Slowsay("[霜风部落，长老之家]\n");
		Sleep(1000);
		system("cls");
		getline(cin,s);
		Slowsay("“这么说，这个笔记是×××的吗？”\n");
		getline(cin,s);
		Slowsay("“是的，而且它与巨岩魔王有关”\n");
		getline(cin,s);
		Slowsay("“唉，都不知道巨岩魔王还有什么打算，现在外面真是太危险了，稍不留神就会被妖怪杀掉”\n");
		getline(cin,s);
		Slowsay("“是的，可是，我们必须完成击退巨岩魔王的使命。”\n");
		getline(cin,s);
		Slowsay("“我知道。但我觉得，现在就该对巨岩魔王发起进攻，因为现在它正在~~腐败~~休息。”\n");
		getline(cin,s);
		system("cls");
		Slowsay("“现在？这...有点太早了吧”\n");
		getline(cin,s);
		Slowsay("“还能等到啥时候？过了这段时间，巨岩魔王就会~~腐败~~休息完毕”\n");
		getline(cin,s);
		Slowsay("“好。那我现在立刻就去端了巨岩魔王的老巢！”\n");
		getline(cin,s);
		system("cls");
		Slowsay("“你吃饱了撑着是吧，你知道巨岩魔王为什么能称霸地球五百万年而不驾崩吗？就因为它太太太太太强了，你对它而言就是手无寸铁赤身裸体。现在过去岂不是送死？”\n");
		getline(cin,s);
		system("cls");
		Slowsay("“好吧。。。”\n"); 
		getline(cin,s);
		system("cls");
		Slowsay("“所以，我们要有耐心，慢慢来”\n");
		getline(cin,s);
		system("cls");
		Slowsay("“对了，之前这里有一个很厉害的兽人，全村只有他在研究制作僵化解除剂，也只有他会。可惜啊，当他带着解药制作仪擅自外出寻找最后一个材料时，就再也没回来了……”\n");
		getline(cin,s);
		system("cls");
		Slowsay("“僵化解除剂是什么鬼？”\n");
		getline(cin,s);
		system("cls");
		Slowsay("“咦，这你都不知道吗，它是一种可以消除掉硫酸僵化液石化效果的药水。现在如果被一只妖怪抓住，如果它饿了，你就会成为荣幸地成为它的午餐。否则它就会喷一口硫酸僵化液送给你，这玩意儿可以慢慢地将你石化”\n");
		getline(cin,s);
		system("cls");
		Slowsay("“这个僵化解除剂的制作配方，我就交给你了。你要知道，我们兽人已经堕落了，不再像从前那样威武了，所以我们必须留在村里”\n");
		getline(cin,s);
		system("cls");
		Slowsay("获得：僵化解除剂配方（全村的希望）\n");
		getline(cin,s);
		system("cls");
		Slowsay("“不过，我相信，你一定可以成功的！”\n");
		getline(cin,s);
		system("cls");
		Slowsay("“还有，为了帮你成功打败巨岩魔王，我特地找来了霜风部落最为强大的战士来协助你”\n");
		getline(cin,s);
		Slowsay("“就是这位——昆迪，他武艺高强，智商超群，绝对是你的好帮手”\n");
		getline(cin,s);
		Slowsay("“感谢感谢”\n");
		getline(cin,s);
		system("cls");
		Slowsay("“记住，你才是这个世界的救世主，一切事情皆由你来决定，其他人不能做主”\n");
		getline(cin,s);
		Slowsay("“好了，时间不多了，你现在先回新手村吧”\n");
		getline(cin,s);
		system("cls");
		Slowsay("“哦，对了，为什么刚才守卫对我那么凶呢？”\n");
		getline(cin,s); 
		Slowsay("“唉，最近你们人类竟然出现了叛徒，勾结巨岩魔王。上次我们的好多弟兄都因为信任叛徒而被杀了”\n");
		getline(cin,s);
		Slowsay("“这......”\n");
		getline(cin,s);
		Slowsay("“唉，或许，人生就是如此吧。。。”\n");
		getline(cin,s);
		system("cls");
	}
	return chuangguan(4,map4);
}


void game() {
	if(!Is_save)
	{
		begin:
		jindu(50);
		HideCursor(0);
		cout<<endl;
		cout<<endl;
		Slowsay("                           请选择一个角色：            ");
		cout<<endl;
		Sleep(500);
		qsay("  1,狂战士：化愤怒为力量，致使自身血量大幅度提升。具有血量极高，防御力较强，攻击力一般的特点(保守类)");
		cout<<endl<<endl;
		Sleep(1000);
		qsay("  2,圣骑士：作为队伍的核心，可以治愈任何一个队友。具有血量高，防御力极强，攻击力一般的特点(测试角色，请谨慎食用)");
		Sleep(1000);
		cout<<endl<<endl;
		qsay("  3,刺客：天生的暗杀者，行动迅速，可以利用剧毒攻击敌人，使对方持续扣血。具有血量一般，防御力一般，攻击力极强的特点(强攻类)");
		Sleep(1000);
		cout<<endl<<endl;
		qsay("  4,法师：可以利用火，雷，电元素来攻击敌人，还可召唤石魔来分散敌人注意力，具有血量弱，攻击力爆表，防御力弱的特点(强攻类)");
		Sleep(1000);
		cout<<endl<<endl;
		Slowsay("请选择：");
		HideCursor(1);
		char ch1;
		cin>>ch1;
		if(ch1=='1') {
			juese="狂战士";
			choosejn=0;
			HP=1000;
			MP=300;
			ATK=85;
			fang=120;
			maxHP=1000;
			maxMP=300;
			maxEXP=100;
		}
		if(ch1=='2') {
			juese="圣骑士";
			choosejn=1;
			HP=800;
			MP=250;
			ATK=80;
			fang=180;
			maxHP=800;
			maxMP=250;
			maxEXP=100;
		}
		if(ch1=='3') {
			juese="刺客";
			choosejn=2;
			HP=600;
			MP=300;
			ATK=120;
			fang=90;
			maxHP=600;
			maxMP=300;
			maxEXP=100;
		}
		if(ch1=='4') {
			juese="法师";
			choosejn=3;
			HP=450;
			MP=400;
			ATK=200;
			fang=75;
			maxHP=450;
			maxMP=400;
			maxEXP=100;
		}
		if(ch1!='1'&&ch1!='2'&&ch1!='3'&&ch1!='4') {
			Slowsay("请输入1——4内的整数！！！");
			Sleep(2000);
			goto begin;
		}
		jindu(50);
		Sleep(1000);
		if(MessageBox(NULL,"是否跳过剧情?(新手建议不跳过)","艾诺迪亚5:巨岩魔王的觉醒",MB_YESNO)!=6) {
			stop_time+=15;
			tiaose(3);
			system("cls"); 
			Slowsay("……………………\n");
			Slowsay("……………………\n");
			Sleep(2000);
			system("cls");
			Slowsay("这是一段尘封的历史\n");
			Sleep(2000);
			system("cls");
			Slowsay("银河历1309年，也就是大约四千两百万年前，宇宙爆发了一场星际战争\n");
			Sleep(2000);
			system("cls");
			Slowsay("由黑暗神率领的灭天舰队与由创世之神率领的长空舰队在银河系中部开战\n");
			Sleep(2000);
			system("cls");
			Slowsay("双方各出动战舰数十万艘，其战势惨不忍睹\n");
			Sleep(2000);
			system("cls");
			Slowsay("银河历2019年，这场持续了七百一十年的战争使得双方战舰只剩下零零散散几十艘\n");
			Sleep(2000);
			system("cls");
			Slowsay("黑暗神最终决定玉石俱焚，率先将剩下的三十三艘战舰组成保护圈，而自己的指挥舰，则在保护圈中间。这个舰队马上对创世之神所在的泰坦星发起了“敢死队”计划\n");
			Sleep(2000);
			system("cls");
			Slowsay("然而他万万没有想到，创世之神已经掌握了群攻技术，迎接他们的是组成八卦图的黑洞洞的炮口\n");
			Sleep(2000);
			system("cls");
			Slowsay("就这样，创世之神直接炸毁了黑暗神乘坐的指挥舰，而黑暗神的肉体也被摧毁，灵魂则流浪在太空中……\n");
			Sleep(3000);
			system("cls");
			Slowsay("创世之神取得了这场星际战争的胜利\n");
			Sleep(3000);
			system("cls");
			Slowsay("由于星际战争中所造成的伤亡太重，所以创世之神族开启了“生命延续”计划\n");
			Sleep(1000);
			system("cls");
			Slowsay("他们在泰坦星建造了一座功能强大的机器\n");
			Sleep(1000);
			system("cls");
			Slowsay("它可以将上亿吨的太空垃圾转化成一颗能抚育生命的星球\n");
			Sleep(1000);
			system("cls");
			Slowsay("但是，由于这个机器需要排除太空垃圾中像γ射线、外星泵这样具有污染性的东西\n");
			Sleep(1000);
			system("cls");
			Slowsay("创世之神决定，将其包裹在特质保护套内，让环境污染降低为零，并将它们聚集在一个星球上\n");
			Sleep(1000);
			system("cls");
			Slowsay("经过一番深思熟虑，他们选中了一颗光秃秃只有岩石而没有任何生命迹象的星球\n");
			Sleep(1500);
			system("cls");
			Slowsay("地球\n");
			Sleep(1000);
			system("cls");
			Slowsay("但他们万万没有想到，这让流浪在三千万光年外的黑暗神的灵魂有机可乘，他以最快的速度赶到太阳系时，已经过去了整整四千多年了\n\n");
			Sleep(1500);
			system("cls");
			Slowsay("他猜得没错，地球上已经堆积了许多装有污染物体的保护套\n");
			Sleep(1000);
			system("cls");
			Slowsay("它念起了那古老的黑魔法咒语，使这些太空垃圾配合黑魔法渗透进那些岩石，而自己，则将灵魂潜入那些岩石内\n");
			Sleep(1000);
			Slowsay("同时，他还召集了黑压压一大批来自各个星系的怪物，准备在地球上安家并计划攻打创世之神\n");
			Sleep(2000);
			system("cls");
			Slowsay("这时候，一件令神吃惊的事情发生了，这颗光秃秃的星球从拥有大气层开始，直到处处都有生物。\n");
			Sleep(2000);
			system("cls");
			Slowsay("黑暗神便有所顾虑，它害怕这些迅速起家的生物坏了它的好事\n");
			Sleep(1500);
			system("cls");
			Slowsay("于是，黑暗神决定：清除掉地球上的所有生物，特别是那些两足行走智商超群的东西\n");
			Sleep(3500);
			system("cls");
			Sleep(2000);
			stop_time+=10;
			Slowsay("历史又翻过了一页\n");
			stop_time-=10;
			Sleep(2500);
			system("cls");
			Slowsay("五百万年前，你诞生在一个战火纷飞的星球上…………\n");
			Sleep(1000);
			system("cls");
			Slowsay("这个星球，就是地球……\n");
			Sleep(1000);
			Slowsay("地球人正在跟来自外太空的神秘怪物拼搏……");
			Sleep(1000);
			system("cls");
			Slowsay("你的父亲，在一次万尸围城的灾难中拼死抵抗，却不幸惨死\n");
			Sleep(2000);
			system("cls");
			Slowsay("而你的母亲，为了保护年幼的你，也葬身怪腹\n");
			Sleep(2000);
			system("cls");
			Slowsay("为了给你的父母亲报仇，也为了拯救世界，你必须找到怪物的主人——巨岩魔王\n"); 
			Sleep(1000);
			Slowsay("它隐藏在一个无人知晓的神秘石钟乳洞……\n");
			Sleep(1000);
			system("cls");
			Slowsay("你需要找到它并将其打败，然后找到巨岩魔王隐藏多年的宝藏。相传它的宝藏是数千万年前一位铸剑师所造，它拥有的力量仅次于无限手套。你只需将它扔到索加达山脉顶峰的古井里，配合古井里巨大的力量，就像灭霸打响指一样，所有怪都会灰飞烟灭\n");
			Sleep(3500);
			system("cls");
			Sleep(3000);
			Slowsay("那么，世界的救星，祝你好运！\n");
			Sleep(2000);
			tiaose(14);
			stop_time-=15;
		}
		Sleep(1000);
		
	}
	system("cls");
	xinshoucun:
	AMP["小瓶生命药水"]=100;SMP["小瓶生命药水"]=400;
	AMP["中瓶生命药水"]=200;SMP["中瓶生命药水"]=800;
	AMP["大瓶生命药水"]=400;SMP["大瓶生命药水"]=1400;
	AMP["特大生命药水"]=800;SMP["特大生命药水"]=2200;
	AMP["小瓶魔法药水"]=100;SMP["小瓶魔法药水"]=150;
	AMP["中瓶魔法药水"]=200;SMP["中瓶魔法药水"]=450;
	AMP["大瓶魔法药水"]=300;SMP["大瓶魔法药水"]=950;
	AMP["特大魔法药水"]=500;SMP["特大魔法药水"]=1650;
	AMP["元气恢复药水"]=1000;SMP["元气恢复药水"]=4000;
	if(Is_first[0]) {
		Slowsay("欢迎来到新手村，您可以在这里买东西，强化装备，接受任务等等");
		Sleep(2000);
		cout<<endl;
		Slowsay("如果您想搞点事情，请输入对应的数字");
		Sleep(1000);
		cout<<endl;
		Slowsay("祝您游戏愉快！！");
		Sleep(2000);
		Is_first[0]=false;
		system("cls");
		tiaose(12);
		Slowsay("请进入‘接受任务&查看主线进度’处查看第一个主线任务\n");
		tiaose(14);
		Sleep(3000);
	}
	char ch2;
	if(Is_save)
	{
		ch2='8';
	}
	if(!Is_save)
	{
		sky:
		jindu(50);
		cout<<endl;
		Slowsay("1,进入商城\n");
		Slowsay("2,进入铁匠铺\n");
		Slowsay("3,抽奖\n");
		Slowsay("4,查看背包与状态\n");
		Slowsay("5,修炼技能\n");
		Slowsay("6,接受任务&查看主线进度\n");
		Slowsay("7,前往试练塔\n");
		Slowsay("8,漫漫尘途\n");
		Slowsay("9,退出\n");
		Sleep(500);
		Slowsay("请选择：");
		cin>>ch2;
	}
	
	if(ch2=='1') {
		shop();
		Sleep(1000);
		goto sky;
	}
	if(ch2=='2') {
		jindu(50);
		Slowsay("欢迎来到铁匠铺，这里有许多关于强健装备的项目，来看看吧");
		Sleep(1000);
		tiej:
		jindu(50);
		cout<<endl;
		cout<<endl;
		Slowsay("1,强化\n");
		Slowsay("2,高能强化\n");
		Slowsay("3,升级\n");
		Slowsay("4,传奇升级\n");
		Slowsay("5,洗炼\n");
		Slowsay("6,继承\n"); 
		Slowsay("7,合成\n");
		Slowsay("8,返回\n");
		Sleep(2000);
		Slowsay("请选择：");
		char chp;
		cin>>chp;
		if(chp=='1') {
			jindu(50);
			if(wuqi[0]=="00") {
				Slowsay("对不起，您还没有武器或防具");
				Sleep(2000);
				goto tiej;
			}
			Slowsay("请输入您要强化的装备\n\n");
			Sleep(1000);
			int Ak=0;
			for(int i=0; i<=9; i++) {
				if(wuqi[i]=="00") {
					break;
				}
				Ak++;
				cout<<i+1<<",";
				Slowsay(wuqi[i]);
				cout<<"  ";
				if(a_f[i]==true) {
					cout<<"攻击力:";
				} else {
					cout<<"防御力:";
				}
				cout<<xinneng[i];
				cout<<endl;
			}
			Sleep(450);
			Slowsay("-1键返回...\n");
			Sleep(1000);
			string chr;
			cin>>chr;
			if(chr=="-1") {
				goto tiej;
			}
			char temp=chr[0];
			if(temp<='0'||temp>Ak+'0')
			{
				goto tiej;
			}
			int chs=temp-'0';
			int mucai=wuqiLV[chs-1]*50;
			int shengtie=wuqiLV[chs-1]*20;
			int gangtie=wuqiLV[chs-1]*10;
			cout<<"           ";
			Slowsay("请注意，此次强化需要");
			cout<<mucai;
			Slowsay("木材,");
			cout<<shengtie;
			Slowsay("生铁,");
			cout<<gangtie;
			Slowsay("钢铁\n");
			Sleep(1000);
			strong:
			Slowsay("确认要强化？     1,确认   2,返回");
			char cho;
			cin>>cho;
			if(cho=='2') {
				goto tiej;
			}
			jindu(50);
			Slowsay("强化中……");
			Sleep(1000);
			
			if(gang<gangtie||sheng<shengtie||mu<mucai) {
				Slowsay("对不起，强化失败，因为材料不足\n");
				Sleep(1000); 
				goto tiej;
			}
			
			Slowsay("强化成功！");
			int cnt1=mucai/50;
			int cnt2=shengtie/20;
			int cnt3=gangtie/10;
			for(int i=0; i<=9; i++) {
				
				if(daoju[i]=="木材"&&cnt1!=0) {
					daoju[i]="00";
					cnt1--;
				}
				if(daoju[i]=="生铁"&&cnt2!=0) {
					daoju[i]="00";
					cnt2--;
				}
				if(daoju[i]=="钢铁"&&cnt3!=0) {
					daoju[i]="00";
					cnt3--;
				}
			}
			xinneng[chs-1]+=wuqiLV[chs-1]*20;
			wuqiLV[chs-1]++;
			Sleep(1000);
			goto tiej;
		}
		if(chp=='2') {
			jindu(50);
			if(wuqi[0]=="00") {
				Slowsay("对不起，您还没有武器或防具");
				Sleep(2000);
				goto tiej;
			}
			Slowsay("请输入您要高能强化的装备");
			Sleep(1000);
			for(int i=0; i<=9; i++) {
				if(wuqi[i]=="00") {
					break;
				}
				cout<<i+1<<",";
				Slowsay(wuqi[i]);
				cout<<"  ";
				if(a_f[i]==true) {
					cout<<"攻击力:";
				} else {
					cout<<"防御力:";
				}
				cout<<xinneng[i];
				cout<<endl;
			}
			Sleep(1000);
			int ch9=0;
			cin>>ch9;
			int mucai=wuqiLV[ch9-1]*150;
			int shengtie=wuqiLV[ch9-1]*60;
			int gangtie=wuqiLV[ch9-1]*30;
			cout<<"           ";
			Slowsay("请注意，此次高能强化需要");
			cout<<mucai;
			Slowsay("木材,");
			cout<<shengtie;
			Slowsay("生铁,");
			cout<<gangtie;
			Slowsay("钢铁\n");
			Sleep(1000);
			Slowsay("确认要高能强化？     1,确认   2,返回");
			char ch10;
			cin>>ch10;
			if(ch10=='2') {
				goto tiej;
			}
			jindu(50);
			Slowsay("高能强化中……");
			Sleep(1000);
			int ch7=0;
			
			if(gang<gangtie||sheng<shengtie||mu<mucai) {
				Slowsay("对不起，高能强化失败，因为材料不足\n");
				Sleep(500);
				goto tiej;
			}
			Slowsay("高能强化成功！");
			int cnt1=mucai/50;
			int cnt2=shengtie/20;
			int cnt3=gangtie/10;
			for(int i=0; i<=9; i++) {
				if(daoju[i]=="木材"&&cnt1!=0) {
					daoju[i]="00";
					cnt1--;
				}
				if(daoju[i]=="生铁"&&cnt2!=0) {
					daoju[i]="00";
					cnt2--;
				}
				if(daoju[i]=="钢铁"&&cnt3!=0) {
					daoju[i]="00";
					cnt3--;
				}
			}
			int a;
			int b=a%10;
			if(b==0) {
				b++;
			}
			wuqi[ch9-1]+=b;
			xinneng[ch9-1]+=wuqiLV[ch9-1]*30;
			Sleep(1000);
			goto tiej;
		}
		if(chp=='3') {
			jindu(50);
			Slowsay("请输入您要升的级数：");
			int cha;
			cin>>cha;//{500+(LV-1)*100+[500+(LV-1)*100]+(cha-1)*100}*
			int aa=500+(LV-1)*100;
			int ab=500+(LV-1)*100+(cha-1)*100;
			int ac=((500+(LV-1)*100+(cha-1)*100)-(500+(LV-1)*100))/100+1;
			cout<<endl;
			Slowsay("需要");
			cout<<(aa+ab)*ac/2;
			Slowsay("金币，");
			Slowsay("确认升级？     1，确认    2，返回\n");
			char chq;
			cin>>chq;
			if(chq=='2') {
				goto tiej;
			}
			jindu(50);
			Slowsay("正在升级……");
			Sleep(2000);
			cout<<endl;
			if(jinbi<(aa+ab)*ac/2) {
				Slowsay("对不起，金币不足，升级失败");
				Sleep(1000);
				goto tiej;
			}
			Slowsay("升级成功！");
			int lv=LV;
			LV+=cha;
			if(juese=="狂战士") {
				//20+(lv-1)*10    20+(lv-1)*10+(cha-1)*10    ((20+(lv-1)*10+(cha-1)*10)-(20+(lv-1)*10))/10+1
				int a1=20+(lv-1)*5;
				int a2=20+(lv-1)*5+(cha-1)*5;
				int a3=((20+(lv-1)*5+(cha-1)*5)-(20+(lv-1)*5))/5+1;
				ATK+=(a1+a2)*a3/2;
				a1=100+(lv-1)*15;
				a2=100+(lv-1)*15+(cha-1)*15;
				a3=((100+(lv-1)*15+(cha-1)*15)-(100+(lv-1)*15))/15+1;
				maxHP+=(a1+a2)*a3/2;
				a1=50+(lv-1)*20;
				a2=50+(lv-1)*20+(cha-1)*20;
				a3=((50+(lv-1)*20+(cha-1)*20)-(50+(lv-1)*20))/20+1;
				maxEXP+=(a1+a2)*a3/2;
				a1=25+(lv-1)*7;
				a2=25+(lv-1)*7+(cha-1)*7;
				a3=((25+(lv-1)*7+(cha-1)*7)-(20+(lv-1)*7))/7+1;
				fang+=(a1+a2)*a3/2;
				a1=45+(lv-1)*15;
				a2=45+(lv-1)*15+(cha-1)*15;
				a3=((45+(lv-1)*15+(cha-1)*15)-(45+(lv-1)*15))/15+1;
				maxMP+=(a1+a2)*a3/2; 
			}
			if(juese=="圣骑士") {
				//20+(lv-1)*10    20+(lv-1)*10+(cha-1)*10    ((20+(lv-1)*10+(cha-1)*10)-(20+(lv-1)*10))/10+1
				int a1=15+(lv-1)*5;
				int a2=15+(lv-1)*5+(cha-1)*5;
				int a3=((15+(lv-1)*5+(cha-1)*5)-(15+(lv-1)*5))/5+1;
				ATK+=(a1+a2)*a3/2;
				a1=85+(lv-1)*13;
				a2=85+(lv-1)*13+(cha-1)*13;
				a3=((85+(lv-1)*13+(cha-1)*13)-(85+(lv-1)*13))/13+1;
				HP+=(a1+a2)*a3/2;
				a1=50+(lv-1)*20;
				a2=50+(lv-1)*20+(cha-1)*20;
				a3=((50+(lv-1)*20+(cha-1)*20)-(50+(lv-1)*20))/20+1;
				maxEXP+=(a1+a2)*a3/2;
				a1=35+(lv-1)*9;
				a2=35+(lv-1)*9+(cha-1)*9;
				a3=((35+(lv-1)*9+(cha-1)*9)-(35+(lv-1)*9))/9+1;
				fang+=(a1+a2)*a3/2;
				a1=55+(lv-1)*17;
				a2=55+(lv-1)*17+(cha-1)*17;
				a3=((55+(lv-1)*17+(cha-1)*17)-(55+(lv-1)*17))/17+1;
				maxMP+=(a1+a2)*a3/2;
			}
			if(juese=="刺客") {
				//20+(lv-1)*10    20+(lv-1)*10+(cha-1)*10    ((20+(lv-1)*10+(cha-1)*10)-(20+(lv-1)*10))/10+1
				int a1=35+(lv-1)*9;
				int a2=35+(lv-1)*9+(cha-1)*9;
				int a3=((35+(lv-1)*9+(cha-1)*9)-(35+(lv-1)*9))/9+1;
				ATK+=(a1+a2)*a3/2;
				a1=70+(lv-1)*11;
				a2=70+(lv-1)*11+(cha-1)*11;
				a3=((70+(lv-1)*11+(cha-1)*11)-(70+(lv-1)*11))/11+1;
				maxHP+=(a1+a2)*a3/2;
				a1=50+(lv-1)*20;
				a2=50+(lv-1)*20+(cha-1)*20;
				a3=((50+(lv-1)*20+(cha-1)*20)-(50+(lv-1)*20))/20+1;
				maxEXP+=(a1+a2)*a3/2;
				a1=25+(lv-1)*7;
				a2=25+(lv-1)*7+(cha-1)*7;
				a3=((25+(lv-1)*7+(cha-1)*7)-(20+(lv-1)*7))/7+1;
				fang+=(a1+a2)*a3/2;
				a1=58+(lv-1)*17;
				a2=58+(lv-1)*17+(cha-1)*17;
				a3=((58+(lv-1)*17+(cha-1)*17)-(58+(lv-1)*17))/17+1;
				maxMP+=(a1+a2)*a3/2;
			}
			if(juese=="法师") {
				//20+(lv-1)*10    20+(lv-1)*10+(cha-1)*10    ((20+(lv-1)*10+(cha-1)*10)-(20+(lv-1)*10))/10+1
				int a1=60+(lv-1)*12;
				int a2=60+(lv-1)*12+(cha-1)*12;
				int a3=((60+(lv-1)*12+(cha-1)*12)-(60+(lv-1)*12))/12+1;
				ATK+=(a1+a2)*a3/2;
				a1=55+(lv-1)*10;
				a2=55+(lv-1)*10+(cha-1)*10;
				a3=((55+(lv-1)*10+(cha-1)*10)-(55+(lv-1)*10))/10+1;
				maxHP+=(a1+a2)*a3/2;
				a1=50+(lv-1)*20;
				a2=50+(lv-1)*20+(cha-1)*20;
				a3=((50+(lv-1)*20+(cha-1)*20)-(50+(lv-1)*20))/20+1;
				maxEXP+=(a1+a2)*a3/2;
				a1=23+(lv-1)*6;
				a2=23+(lv-1)*6+(cha-1)*6;
				a3=((23+(lv-1)*6+(cha-1)*6)-(23+(lv-1)*6))/6+1;
				fang+=(a1+a2)*a3/2;
				a1=70+(lv-1)*20;
				a2=70+(lv-1)*20+(cha-1)*20;
				a3=((70+(lv-1)*20+(cha-1)*20)-(70+(lv-1)*20))/20+1;
				maxMP+=(a1+a2)*a3/2;
			}
			Sleep(1000);
			goto tiej;
		}
		if(chp=='4') {
			jindu(50);
			Slowsay("请输入您要传奇升的级数");
			int chk=0;
			cin>>chk;
			int aa=1000+(LV-1)*300;
			int ab=1000+(LV-1)*300+(chk-1)*300;
			int ac=((1000+(LV-1)*300+(chk-1)*300)-(1000+(LV-1)*300))/300+1;
			cout<<endl;
			Slowsay("需要");
			cout<<(aa+ab)*ac/2;
			Slowsay("金币，");
			Slowsay("确认升级？     1，确认    2，返回\n");
			char t_f;
			cin>>t_f;
			if(t_f=='2') {
				goto tiej;
			}
			jindu(50);
			Slowsay("正在传奇升级……");
			Sleep(2000);
			cout<<endl;
			if(jinbi<(aa+ab)*ac/2) {
				Slowsay("对不起，金币不足，传奇升级失败");
				Sleep(1000);
				goto tiej;
			}
			Slowsay("传奇升级成功！");
			int lv=LV;
			LV+=chk;
			maxHP+=(int)HP*0.55;
			fang+=(int)fang*0.35;
			ATK+=(int)ATK*0.45;
			maxEXP+=(int)maxEXP*1.0;
			Sleep(1000);
			goto tiej;
		}
		if(chp=='5') {
			Start:
			jindu(50);
			if(wuqi[0]=="00") {
				Slowsay("对不起，您还没有武器或防具\n");
				Sleep(2000);
				goto tiej;
			}
			Slowsay("请输入您要洗炼的装备：\n");
			Sleep(1000);
			int Ak=0;
			for(int i=0; i<=9; i++) {
				if(wuqi[i]=="00") {
					break;
				}
				Ak++;
				cout<<i+1<<",";
				Slowsay(wuqi[i]);
				cout<<"  ";
				if(a_f[i]==true) {
					cout<<"攻击力:";
				} else {
					cout<<"防御力:";
				}
				cout<<xinneng[i];
				cout<<endl;
			}
			char ch10;
			cin>>ch10;
			if(ch10<='0'||ch10>Ak+'0')
			{
				goto Start;
			}
			Sleep(500);
			jindu(50);
			Slowsay("洗炼中……\n");
			int a=rand();
			int b=rand();
			if(xinneng[ch10-1]/100==0) {
				b=a%100;
				while(b>xinneng[ch10-1]+30) {
					b-=a%10;
				}
				while(b<xinneng[ch10-1]-30) {
					b+=a%10;
				}
			}
			if(xinneng[ch10-1]/1000==0&&xinneng[ch10-1]/100!=0) {
				b=a%1000;
				while(b>xinneng[ch10-1]+300) {
					b-=a%100;
				}
				while(b<xinneng[ch10-1]-300) {
					b+=a%100;
				}
			}
			if(xinneng[ch10-1]/10000==0&&xinneng[ch10-1]/1000!=0) {
				b=a%10000;
				while(b>xinneng[ch10-1]+3000) {
					b-=a%1000;
				}
				while(b<xinneng[ch10-1]-3000) {
					b+=a%1000;
				}
			}
			Sleep(1000);
			int p=xinneng[ch10-1];
			xinneng[ch10-1]=b;
			jindu(50);
			if(p>b) {
				Slowsay("很遗憾，");
				Slowsay(wuqi[ch10-1]);
				if(a_f[ch10-1]==true) {
					Slowsay("的攻击力");
				} else {
					Slowsay("的防御力");
				}
				Slowsay("锐减为");
				cout<<b<<endl;
			}
			if(p<b) {
				Slowsay("恭喜您，");
				Slowsay(wuqi[ch10-1]);
				if(a_f[ch10-1]==true) {
					Slowsay("的攻击力");
				} else {
					Slowsay("的防御力");
				}
				Slowsay("增加为");
				cout<<b<<endl;
			}
			if(p==b) {
				Slowsay("震惊！");
				Slowsay(wuqi[ch10-1]);
				if(a_f[ch10-1]==true) {
					Slowsay("的攻击力");
				} else {
					Slowsay("的防御力");
				}
				Slowsay("没有任何变化\n");
			}
			Sleep(2000);
			goto tiej;
		}
		if(chp=='6') {
guow:
			jindu(50);
			say("请输入您所继承的王位：\n");
			say("1,克里斯国王\n");
			say("2,切斯特里夫国王\n");
			say("3,卡尼亚国王\n");
			say("4,德格兰国王\n");
			say("5,葛莱芬多国王\n");
			say("6,赛拉图里亚国王\n");
			say("7,返回\n");
			Sleep(2000);
			say("请选择：");
			char chd;
			cin>>chd;
			if(chd=='1') {
				jindu(50);
				Slowsay("请输入克里斯国王的习惯：");
				string s="";
				cin>>s;
				int b=rand()%4;
				if(s!=xiguan[b]) {
					Slowsay("回答错误，您肯定不是克里斯国王的继承人");
					jinbi-=100;
					Sleep(2000);
					goto guow;
				}
				Slowsay("回答正确！");
				Sleep(1000);
				jindu(50);
				int a1;
				int b1=a1%10;
				while(b>4) {
					b1-=2;
				}
				Slowsay("恭喜您，成功继承了");
				cout<<ke[b1];
				if(b1==4) {
					jinbi+=10000;
				} else {
					jinbi+=(b1+1)*1000;
				}
				Sleep(2000);
				goto guow;
			}
			if(chd=='2') {
				jindu(50);
				Slowsay("请输入切斯特里夫国王的习惯");
				string s="";
				cin>>s;
				int an;
				int bn=an%10;
				while(bn>4) {
					bn-=2;
				}
				if(s!=xiguan[bn]) {
					Slowsay("回答错误，您肯定不是切斯特里夫国王的继承人");
					jinbi-=100;
					Sleep(2000);
					goto guow;
				}
				Slowsay("回答正确！\n");
				Sleep(1000);
				jindu(50);
				if(bag1>=9) {
					Slowsay("对不起，您的背包空间不足，无法继承此物品，请重试\n");
					Sleep(1000);
					goto sky;
				}
				int am;
				int bm=am%10;
				while(bm>4) {
					bm-=2;
				}
				Slowsay("恭喜您，成功继承了");
				Slowsay(qie[bm]);
				yaoshui[bag1]=qie[bm];
				Sleep(2000);
				goto guow;
			}
			if(chd=='3') {
				jindu(50);
				Slowsay("请输入卡尼亚国王的习惯");
				string s="";
				cin>>s;
				int aq;
				int bq=aq%10;
				while(bq>4) {
					bq-=2;
				}
				if(s!=xiguan[bq]) {
					Slowsay("回答错误，您肯定不是卡尼亚国王的继承人");
					jinbi-=100;
					Sleep(2000);
					goto guow;
				}
				Slowsay("回答正确！");
				Sleep(1000);
				jindu(50);
				if(bag>=9) {
					Slowsay("对不起，您的背包空间不足，无法继承此物品，请重试\n");
					Sleep(1000);
					goto sky;
				}
				int as;
				int bs=as%10;
				while(bs>4) {
					bs-=2;
				}
				Slowsay("恭喜您，成功继承了");
				Slowsay(ka[bs]);
				wuqi[bag]=ka[bs];
				xinneng[bag]=kaatk[bs];
				Sleep(2000);
				goto guow;
			}
			if(chd=='4') {
				jindu(50);
				Slowsay("请输入德格兰国王的习惯");
				string s="";
				cin>>s;
				int ad;
				int bd=ad%10;
				while(bd>4) {
					bd-=2;
				}
				if(s!=xiguan[bd]) {
					Slowsay("回答错误，您肯定不是德格兰国王的继承人");
					jinbi-=100;
					Sleep(2000);
					goto guow;
				}
				Slowsay("回答正确！");
				Sleep(1000);
				jindu(50);
				if(bag>=9) {
					Slowsay("对不起，您的背包空间不足，无法继承此物品，请重试\n");
					Sleep(1000);
					goto sky;
				}
				int ae;
				int be=ae%10;
				while(be>4) {
					be-=2;
				}
				Slowsay("恭喜您，成功继承了");
				Slowsay(de[be]);
				wuqi[bag]=de[be];
				xinneng[bag]=defang[be];
				Sleep(2000);
				goto guow;
			}
			if(chd=='5') {
				jindu(50);
				Slowsay("请输入葛莱芬多国王的习惯");
				string s="";
				cin>>s;
				int ad;
				int bd=ad%10;
				while(bd>4) {
					bd-=2;
				}
				if(s!=xiguan[bd]) {
					Slowsay("回答错误，您肯定不是葛莱芬多国王的继承人");
					jinbi-=100;
					Sleep(2000);
					goto guow;
				}
				Slowsay("回答正确！");
				Sleep(1000);
				jindu(50);
				if(bag>=9) {
					Slowsay("对不起，您的背包空间不足，无法继承此物品，请重试\n");
					Sleep(1000);
					goto sky;
				}
				int ae;
				int be=ae%10;
				while(be>4) {
					be-=2;
				}
				Slowsay("恭喜您，成功继承了");
				Slowsay(de[be]);
				daoju[bag2]=de[be];
				Sleep(2000);
				goto guow;
			}
			if(chd=='6') {
				jindu(50);
				Slowsay("请输入赛拉图里亚国王的习惯");
				string s="";
				cin>>s;
				int ad;
				int bd=ad%10;
				while(bd>4) {
					bd-=2;
				}
				if(s!=xiguan[bd]) {
					Slowsay("回答错误，您肯定不赛拉图里亚国王的继承人");
					jinbi-=100;
					Sleep(2000);
					goto guow;
				}
				Slowsay("回答正确！");
				Sleep(1000);
				jindu(50);
				int ae;
				int be=ae%10;
				while(be>4) {
					be-=2;
				}
				Slowsay("恭喜您，成功继承了");
				cout<<sai[be];
				if(be==4) {
					G+=1000;
				} else {
					G+=(be+1)*100;
				}
				Sleep(2000);
				goto guow;
			}
			if(chd=='7') {
				goto tiej;
			}
			goto tiej;
		}
		if(chp=='7') {
			jindu(50);
			Slowsay("您是否要合成传奇装备？  1,是  2,返回\n");
			char chk;
			cin>>chk;
			if(chk=='1') {
				say("1,炎龙王之剑   攻击力+30%   职业：狂战士 or 圣骑士  可用绿宝石*3合成    ￥500\n");
				say("2,魔龙王之剑   攻击力+35%   职业：狂战士 or 圣骑士  可用绿宝石*3合成    ￥1500\n");
				say("3,金刚宝剑     攻击力+40%   职业：圣骑士 or 刺客    可用蓝宝石*2合成    ￥2000\n");
				say("4,地狱之刃     攻击力+50%   职业：刺客              可用蓝宝石*3合成    ￥3000\n");
				say("5,世界树神杖   攻击力+55%   职业：法师              可用蓝宝石*3合成    ￥3000\n");
				say("6,紫晶神符     攻击力+65%   职业：任意              可用蓝宝石*4合成    ￥5500\n");
				say("7,炫彩霸王剑   攻击力+100%  职业：狂战士 or 圣骑士  可用蓝宝石*8合成    ￥10000\n");
				say("8,天国之杖/剑  攻击力+130%  职业：刺客 or 法师      可用蓝宝石*8合成    ￥10000\n");
				say("9,返回\n");
				Sleep(1000);
				Slowsay("请选择：");
				char chj;
				cin>>chj;
				if(chj=='1'&&bag<9&&(juese=="狂战士"||juese=="圣骑士")) {
					int sum=0;
					jindu(50);
					Slowsay("合成中……");
					for(int i=0; i<=bag; i++) {
						if(daoju[i]=="绿宝石") {
							sum++;
						}
					}
					Sleep(2000);
					system("cls");
					if(sum>=3&&jinbi>=500) {
						Slowsay("合成成功！");
						wuqi[bag]="炎龙王之剑";
						xinneng[bag]=30;
						wuqiLV[bag]=1;
						Is_pct[bag]=true; 
						jinbi-=500;
						Sleep(1000);
						goto tiej;
					} else {
						Slowsay("合成失败，可能因为金币不足或材料不够，请重试\n");
						Sleep(1000);
						goto tiej;
					}
				}
				if(chj=='2'&&bag<9&&(juese=="狂战士"||juese=="圣骑士")) {
					int sum=0;
					jindu(50);
					Slowsay("合成中……");
					for(int i=0; i<=bag; i++) {
						if(daoju[i]=="绿宝石") {
							sum++;
						}
					}
					Sleep(2000);
					system("cls");
					if(sum>=3&&jinbi>=1500) {
						Slowsay("合成成功！");
						wuqi[bag]="魔龙王之剑";
						xinneng[bag]=30;
						wuqiLV[bag]=1;
						Is_pct[bag]=true;
						jinbi-=1000;
						Sleep(1000);
						goto tiej;
					} else {
						Slowsay("合成失败，可能因为金币不足或材料不够，请重试\n");
						Sleep(1000);
						goto tiej;
					}
				}
				if(chj=='3'&&bag<9&&(juese=="圣骑士"||juese=="刺客")) {
					int sum=0;
					jindu(50);
					Slowsay("合成中……");
					for(int i=0; i<=bag; i++) {
						if(daoju[i]=="蓝宝石") {
							sum++;
						}
					}
					Sleep(2000);
					system("cls");
					if(sum>=2&&jinbi>=2000) {
						Slowsay("合成成功！");
						wuqi[bag]="金刚宝剑";
						xinneng[bag]=40;
						wuqiLV[bag]=1;
						Is_pct[bag]=true;
						jinbi-=2000;
						Sleep(1000);
						goto tiej;
					} else {
						Slowsay("合成失败，可能因为金币不足或材料不够，请重试\n");
						Sleep(1000);
						goto tiej;
					}
				}
				if(chj=='4'&bag<9&&juese=="刺客") {
					int sum=0;
					jindu(50);
					Slowsay("合成中……");
					for(int i=0; i<=bag; i++) {
						if(daoju[i]=="蓝宝石") {
							sum++;
						}
					}
					Sleep(2000);
					system("cls");
					if(sum>=3&&jinbi>=3000) {
						Slowsay("合成成功！");
						wuqi[bag]="地狱之刃";
						xinneng[bag]=50;
						wuqiLV[bag]=1;
						Is_pct[bag]=true;
						jinbi-=3000;
						Sleep(1000);
						goto tiej;
					} else {
						Slowsay("合成失败，可能因为金币不足或材料不够，请重试\n");
						Sleep(1000);
						goto tiej;
					}
				}
				if(chj=='5'&&bag<9&&juese=="法师") {
					int sum=0;
					jindu(50);
					Slowsay("合成中……");
					for(int i=0; i<=bag; i++) {
						if(daoju[i]=="蓝宝石") {
							sum++;
						}
					}
					Sleep(2000);
					system("cls");
					if(sum>=3&&jinbi>=3000) {
						Slowsay("合成成功！");
						wuqi[bag]="世界树神杖";
						xinneng[bag]=55;
						wuqiLV[bag]=1;
						Is_pct[bag]=true;
						jinbi-=3000;
						Sleep(1000);
						goto tiej;
					} else {
						Slowsay("合成失败，可能因为金币不足或材料不够，请重试\n");
						Sleep(1000);
						goto tiej;
					}
				}
				if(chj=='6'&&bag<9) {
					int sum=0;
					jindu(50);
					Slowsay("合成中……");
					for(int i=0; i<=bag; i++) {
						if(daoju[i]=="蓝宝石") {
							sum++;
						}
					}
					Sleep(2000);
					system("cls");
					if(sum>=4&&jinbi>=5500) {
						Slowsay("合成成功！");
						wuqi[bag]="紫晶神符";
						xinneng[bag]=65;
						wuqiLV[bag]=1;
						Is_pct[bag]=true;
						jinbi-=5500;
						Sleep(1000);
						goto tiej;
					} else {
						Slowsay("合成失败，可能因为金币不足或材料不够，请重试\n");
						Sleep(1000);
						goto tiej;
					}
				}
				if(chj=='7'&&bag<9&&(juese=="狂战士"||juese=="圣骑士")) {
					int sum=0;
					jindu(50);
					Slowsay("合成中……");
					for(int i=0; i<=bag; i++) {
						if(daoju[i]=="蓝宝石") {
							sum++;
						}
					}
					Sleep(2000);
					system("cls");
					if(sum>=8&&jinbi>=10000) {
						Slowsay("合成成功！");
						wuqi[bag]="炫彩霸王剑";
						xinneng[bag]=100;
						wuqiLV[bag]=1;
						Is_pct[bag]=true;
						jinbi-=10000;
						Sleep(1000);
						
						goto tiej;
					} else {
						Slowsay("合成失败，可能因为金币不足或材料不够，请重试\n");
						Sleep(1000);
						goto tiej;
					}
				}
				if(chj=='8'&&bag<9&&(juese=="法师"||juese=="刺客")) {
					int sum=0;
					jindu(50);
					Slowsay("合成中……");
					for(int i=0; i<=bag; i++) {
						if(daoju[i]=="蓝宝石") {
							sum++;
						}
					}
					Sleep(2000);
					system("cls");
					if(sum>=8&&jinbi>=10000) {
						Slowsay("合成成功！");
						if(juese=="刺客") {
							wuqi[bag]="天国之剑";
						} else {
							wuqi[bag]="天国之杖";
						}
						Is_pct[bag]=true;
						jinbi-=10000;
						xinneng[bag]=130;
						wuqiLV[bag]=1;
						Sleep(1000);
						goto tiej;
					} else {
						Slowsay("合成失败，可能因为金币不足或材料不够，请重试\n");
						Sleep(1000);
						goto tiej;
					}
				}
				if(chj=='9') {
					goto tiej;
				}
				Slowsay("对不起，无法执行此操作，可能因为没有输入正确数字或角色不对，请重试");
				Sleep(1000);
				goto tiej;
			}
			if(chk=='2') {
				goto tiej;
			}
			say("请输入1——2内的整数！！");
			Sleep(1000);
			goto tiej;
		}
		if(chp=='8') {
			goto sky;
		}
		if(chp>'8'||chp<'1') {
			Slowsay("请输入1——8内的整数");
			Sleep(1000);
			goto tiej;
		}
	}
	if(ch2=='3') {
chouj:
		jindu(50);
		cout<<endl;
		cout<<endl;
		Slowsay("请选择一个卡片：\n\n");
		Slowsay("1,*卡\n");
		Slowsay("2,&卡\n");
		Slowsay("3,#卡\n");
		Slowsay("4,^卡\n");
		Slowsay("5,@卡\n");
		Slowsay("6,%卡\n");
		Slowsay("7,返回\n"); 
		Sleep(1000);
		Slowsay("请选择：");
		char chg;
		cin>>chg;
		if(chg>='7'||chg<'1') {
			goto sky;
		}
		cout<<endl;
		Slowsay("此次抽奖需要");
		cout<<chou;
		Slowsay("金币\n");
		Sleep(1000);
		Slowsay("确认抽奖？ 1,确认  2,返回\n");
		int chi=0;
		cin>>chi;
		if(chi==2) {
			goto tiej;
		}
		if(chi!=1&&chi!=2) {
			goto chouj;
		}
		if(jinbi<chou) {
			Slowsay("对不起，金币不足，无法执行此操作");
			Sleep(1000);
			goto sky;
		}
		jinbi-=chou;
		chou+=150;
		int k=rand()%30;
		if(k>=0&&k<=9) {
			Slowsay("恭喜您，抽到了：");
			int p=rand()%10;
			cout<<choujin[p];
			Slowsay("金币\n");
			jinbi+=choujin[p];
			Sleep(1000);
			goto sky;
		}
		if(k>=10&&k<=12&&bag<9) {
			Slowsay("恭喜您，抽到了");
			cout<<rand_arms[k-10];
			wuqi[bag]=rand_arms[k-10];
			wuqiLV[bag]=1;
			a_f[bag]=true;
			xinneng[bag]=rand_armsxing[k-10];
			bag++;
			Sleep(1000);
			goto sky;
		}
		if(k>=10&&k<=12&&bag==9) {
			Slowsay("很遗憾，由于您的背包空间不足，无法接受奖励，请清理出一格空间后重试\n");
			Sleep(1500);
			goto sky;
		}
		Slowsay("很遗憾，您什么也没有抽到\n");
		Sleep(1000);
		goto sky;
	}
	if(ch2=='4') {
		Bag();
		goto sky;
	}
	if(ch2=='5') {
		Train_skill(); 
		goto sky;
	}
	if(ch2=='6')
	{
		Task();
		goto sky;
	}
	if(ch2=='7') {
		if(slt())
		{
			jinbi+=350;
		}
		goto sky;
	}
	if(ch2=='8') {
		flag:
		system("cls");
		jindu(50);
		Slowsay("请输入您想去的地方\n\n\n");
		tiaose(12);
		cout<<"■■■■■■■■	 ■■■■■■■■"<<endl;
		cout<<"■7 死寂沙漠  ■ * * * * ■8 亡命沼泽  ■"<<endl;
		cout<<"■■■■■■■■	 ■■■■■■■■"<<endl;
		cout<<"       *                 	*"<<endl;
		cout<<"       *        		*"<<endl;
		cout<<"       *        		*"<<endl;
		cout<<"       *                 	*"<<endl;
		cout<<"■■■■■■■■         ■■■■■■■■ 	■■■■■■■■■"<<endl;
		cout<<"■6 极冰之地  ■         ■9 绝命地牢  ■* * * *■10 沉没的大陆 ■"<<endl;
		cout<<"■■■■■■■■         ■■■■■■■■ 	■■■■■■■■■"<<endl;
		cout<<"       *        										  		       			*		  "<<endl;
		cout<<"       *        						     									*		  "<<endl;
		cout<<"       *        						        								*		  "<<endl;
		cout<<"■■■■■■■■        ■■■■■■■■	★★★★★★★★  "<<endl;
		cout<<"■5 死亡森林  ■* * * * ■4 霜风部落  ■	★ 11 石钟乳洞★  "<<endl;
		cout<<"■■■■■■■■  	■■■■■■■■	★★★★★★★★  "<<endl;
		cout<<"                             *         "<<endl;
		cout<<"                          *            "<<endl;
		cout<<"		        *               "<<endl;
		cout<<"		     *                  "<<endl;
		cout<<"		  *                     "<<endl;
		cout<<"               *                       "<<endl;
		cout<<"            *                          "<<endl;
		cout<<"■■■■■■■■        ■■■■■■■■        ■■■■■■■■"<<endl;
		cout<<"■3 阳光海滩  ■* * * * ■2 动人花园  ■* * * * ■  1 新手村  ■"<<endl;
		cout<<"■■■■■■■■        ■■■■■■■■        ■■■■■■■■"<<endl;
		string boat;
		tiaose(15);
		cin>>boat;
		system("cls");
		Sleep(500);
		if(boat!="1"&&boat!="2"&&boat!="3"&&boat!="4"&&boat!="5"
		&&boat!="6"&&boat!="7"&&boat!="8"&&boat!="9"&&boat!="10"&&boat!="11")
		{
		   	goto flag;
		}
		
		char chi=boat[0];
		int ship=chi-'0';
		if(boat=="10")
		{
			ship=10;
		}
		if(boat=="11")
		{
			ship=11;
		}
		if(ship>11||ship<1) {
			goto xinshoucun;
		}
		if(!Can_go[ship]&&ship==1)
		{
			Slowsay("“新手村已经被怪入侵了，我们还是不要去那里好一些……”\n");
			Sleep(2000);
			goto flag;
		}
		if(!Can_go[ship])
		{
			Slowsay("对不起，此地图还未解锁哦\n");
			Sleep(1000);
			goto xinshoucun;
		}
		HideCursor(0);
		system("cls");
		Slowsay("正在前往：");
		tiaose(11);
		Slowsay(destin[ship]);
		cout<<endl<<endl;
		for(int i=1;i<=100;i++)
		{
			if(i<=30)
			{
				tiaose(14);
			}
			if(i>30&&i<=60)
			{
				tiaose(5);
			}
			if(i>60&&i<=80)
			{
				tiaose(1);
			}
			if(i>80)
			{
				tiaose(12);
			}
			cout<<i<<"%";
			guangbiao(0,2);
			Sleep(30);
			cout<<"    ";
			guangbiao(0,2);
		}
		switch(ship) 
		{
			case 1 : {
				goto sky;
			}
			case 4 : {
				int tmp=TD;
				int Tmp[2];
				Tmp[0]=assTD[0];
				Tmp[1]=assTD[1];
				if(shuangfeng())
				{
					Can_into=true;
				}
				TD=tmp;
				assTD[0]=Tmp[0];
				assTD[1]=Tmp[1];
				break;
			}
			case 11 : {
				if(!chuangguan(ship,map2)) {
					if(Wend)
					{
						The_end(1);
					}
					else
					{
						The_end(4);
					}
				}
				else
				{
					The_end(3);
				}
				break;
			}
			default : {
				int tmp=TD;
				int Tmp[2];
				Tmp[0]=assTD[0];
				Tmp[1]=assTD[1];
				switch(ship)
				{
					case 2:{if(chuangguan(ship,map2)){Can_go[ship+1]=true;}break;}
					case 3:{if(chuangguan(ship,map3)){Can_go[ship+1]=true;}break;}
					case 5:{if(chuangguan(ship,map5)){Can_go[ship+1]=true;}break;}
					case 6:{if(chuangguan(ship,map6)){Can_go[ship+1]=true;}break;}
					case 7:{if(chuangguan(ship,map7)){Can_go[ship+1]=true;}break;}
					case 8:{if(chuangguan(ship,map8)){Can_go[ship+1]=true;}break;}
					case 9:{if(chuangguan(ship,map9)){Can_go[ship+1]=true;}break;}
					case 10:{if(chuangguan(ship,map10)){Can_go[ship+1]=true;}break;}
				}
				TD=tmp;
				assTD[0]=Tmp[0];
				assTD[1]=Tmp[1];
				break;
			}
		}
		if(!Is_end)
		{
			goto flag;
		}
		system("cls");
		if(MessageBox(NULL,"游戏已完结，是否继续？","艾诺迪亚5:巨岩魔王的觉醒",MB_YESNO)==6)
		{
			HP=0x7f7f7f7f7f;
			MP=0x7f7f7f7f;
			ATK=0x3f3f3f3f;
			fang=0x3f3f3f;
			HideCursor(1);
			Is_change=false;
			maxHP=HP;
			maxMP=MP;
			goto sky;
		}
	}
	if(ch2=='9')
	{
		Inotia();
		POF();
		Sleep(1000);
		tiaose(10);
		exit(0);
	}
	if(ch2<'1'||ch2>'9')
	{
		goto sky;
	}
}
int main() {
	srand((int)time(0));
	char ch;
	Can_go[11]=Can_go[10]=true;//开挂 
	if(MessageBox(NULL,"是否读取存档？","艾诺迪亚5:巨岩魔王的觉醒",MB_YESNO)==6)
	{
		Read();
		Is_save=true; 
		ch='1';
		system("mode con cols=120 lines=30");
	}
	else
	{
		system("mode con cols=120 lines=30");
		memset(Is_first,true,sizeof(Is_first));
		Can_go[1]=true;
		
	}
	start:
	
	if(!Is_save)
	{
		system("cls");
		jindu(50);
		cout<<endl;
		cout<<endl;
		tiaose(14);
		Slowsay("      1,进入游戏\n");
		Slowsay("      2,查看游戏规则\n");
		Slowsay("      3,查看作者简介\n");
		Slowsay("      4,退出\n");
		cout<<endl;
		Sleep(600);
		Slowsay("      请选择:");
		cin>>ch;
	}
	if(ch=='1') {
		if(!Is_save)
		{
			getline(cin,s);
			go:
			jindu(50);
			Slowsay("请先输入您的名字：");
			getline(cin,name);
			if(name.size()>15) {
				Slowsay("对不起，姓名长度不得超过15个字符！！");
				Sleep(1000);
				goto go;
			}
			if(name.empty())
			{
				Slowsay("对不起，名字不得为空！！");
				Sleep(1000);
				goto go;
			}
			Sleep(500);
		}
		game();
		system("cls");
		Sleep(2500);
		stop_time=58;
		HideCursor(0);
		Slowsay("后记：\n\n");
		Sleep(1000);
		system("cls");
		Slowsay("我们是OIer，\n\n");
		Sleep(500);
		Slowsay("所以我们\n");
		Sleep(500);
		Slowsay("不用在跑道上挥汗如雨；\n");
		Sleep(500);
		Slowsay("不用在球场上健步如飞；\n\n");
		Sleep(1000);
		Slowsay("更不用在没事的时候，\n");
		Sleep(500);
		Slowsay("经受非人的体能训练……");
		Sleep(1000);
		system("cls");
		Slowsay("但是，\n\n");
		Sleep(250);
		Slowsay("我们却要把头脑高速运转，\n\n");
		Sleep(500);
		Slowsay("还要接受一大堆\n");
		Sleep(250);
		Slowsay("大学生也只是 “了解即可”的知识，\n");
		Sleep(1000);
		system("cls");
		Sleep(500);
		Slowsay("把一个个抽象的问题\n");
		Sleep(500);
		Slowsay("转化为一篇篇优美的代码，\n");
		Sleep(500);
		Slowsay("才能在F9按下以后获得欢呼。\n\n");
		Sleep(1000);
		system("cls");
		Slowsay("不要以为我们机房里没有风吹，没有日晒，\n");
		Sleep(500);
		Slowsay("就比勤劳的体育生们轻松，\n\n");
		Sleep(500);
		Slowsay("只不过是大脑和四肢 的区别罢了。\n");
		Sleep(1000);
		system("cls");
		Slowsay("可是，OIer的寂寞和委屈又有谁能懂？\n\n");
		Sleep(500);
		Slowsay("自习课鏖战机房，却被认为而是逃课上网；\n\n");
		Sleep(1000);
		Slowsay("为荣耀耽误考试去比赛，却被认为是逃避。\n\n");
		Sleep(1000);
		system("cls");
		Slowsay("体育的同学们虽然辛苦，但在挥汗如雨的背后，");
		Sleep(500);
		Slowsay("有人在喝彩鼓掌；\n\n");
		Sleep(500);
		Slowsay("在风吹日晒的同时，");
		Sleep(500);
		Slowsay("有粉丝在仰慕。\n");
		Sleep(1500);
		system("cls"); 
		Slowsay("而我们呢？\n");
		Sleep(1000);
		system("cls");
		Slowsay("与UnAC较劲的时候，只有那一遍遍的运行窗口，知道我们的不屈；\n\n");
		Sleep(1500);
		Slowsay("刷题的漫漫长夜，只有陪伴我们的笔记本电脑，知道我们的不懈；\n\n");
		Sleep(1500);
		Slowsay("在自习课别人学习的时候，只有板砖般的算法导论，知道我们的进取；\n\n");
		Sleep(1500);
		Slowsay("在机房泡得抢不上饭的时候，只有五毛一包的干脆面，知道我们的执着……\n\n");
		Sleep(1500);
		system("cls");
		Slowsay("没有人会理解，\n");
		Sleep(1000);
		system("cls");
		Slowsay("OIer见面，除了程序、算法、膜你之外别无他言。\n");
		Sleep(1500);
		system("cls");
		Slowsay("我们的世界里，从来不会有偶像、歌星的出现。");
		Sleep(1000);
		system("cls");
		Slowsay("这不是被家长逼迫的“小三门”，\n\n");
		Sleep(1000);
		Slowsay("是我们的兴趣，\n");
		Sleep(1000);
		Slowsay("我们的爱好，\n");
		Sleep(1000);
		Slowsay("乃至我们的事业。\n");
		Sleep(1500);
		system("cls");
		Slowsay("每一个OIer都幻想着自己脖子上可以挂上一块沉甸甸的金牌，\n\n");
		Sleep(1500);
		system("cls");
		Slowsay("而不是万恶的应试教育的枷锁。\n");
		Sleep(1000);
		Slowsay("没准哪个OIer，就是下一个艾伦图灵，\n\n\n");
		Sleep(1000);
		Slowsay("挑战头脑的极限，\n\n");
		Sleep(1000);
		Slowsay("去做最不平凡的自己。");
		Sleep(2000);
		system("cls");
		Slowsay("只因为，我们是OIer\n");
		Sleep(3000);
		system("cls");
		Sleep(3000);
		stop_time=60;
		Slowsay("Special Thanks:\n\n");
		Slowsay("Mrs Zheng  &  Zhangtianli  &  Chenyang\n\n\n");
		Slowsay("and who sitting in front of the computer\n");
		Sleep(3000);
		system("cls");
		Sleep(1500);
		Slowsay("谨以此游戏纪念我们在OI赛场上奋斗的青春\n");
		Slowsay("                                      Presented by LXZY\n");
		Sleep(1000);
		HideCursor(1);
	}
	if(ch=='2') {
		jindu(50);
		getline(cin,s);
		cout<<endl;
		cout<<endl;
		stop_time+=20;
		Slowsay("简单来说呢，规则就是——打怪物（逃\n");
		Sleep(1500);
		Slowsay("具体见后（什么鬼）\n");
		Sleep(1000);
		Slowsay("Enter键继续...");
		getline(cin,s);
		stop_time-=10;
		goto start;
	}
	if(ch=='3') {
		system("cls");
		jindu(50);
		getline(cin,s);
		Slowsay("				╭︿︿︿╮ \n");
		Slowsay("				{/ o  o /} \n");
		Slowsay("				(  (oo)  ) \n");
		Slowsay("	   			  ︶︶︶   \n");
		Slowsay("本游戏作者，典型菜鸡一个，更像一个↑↑↑，经常闹笑话，在经历了长达8个多月的英勇奋战后，编出了一个辣鸡游戏。望各位支持我的人给我提点建议，我会尽力去改进………\n");
		cout<<endl<<endl;
		Slowsay("$$$$$拒绝盗版游戏，合理安排游戏时间，谨防沉迷（废话）$$$$$\n\n");
		Sleep(450);
		Slowsay("Enter键继续...");
		getline(cin,s);
		goto start;
	}
	if(ch=='4') {
		Inotia();
		POF();
		tiaose(10);
		Sleep(2000);
	}
	if(ch!='1'&&ch!='2'&&ch!='3'&&ch!='4') {
		cout<<endl;
		Slowsay("请输入1——4内的整数！！！\n");
		Sleep(1000);
		goto start;
	}
	tiaose(15);
	return 0;
}
