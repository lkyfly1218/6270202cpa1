#include <iostream>
#include <string>

using namespace std;

//创建大学主体结构体
struct collage{
  string name;
  int code;
  int ranking;
};

//创建专业主体结构体
struct major_class{
  string name;
  string website;
};

void num_1();
void num_1_1();

//主函数
int main() 
{
  cout<<"==============Menu============="<<endl
      <<"1.查看已选院校================="<<endl
      <<"2.退出========================="<<endl
      <<"==============================="<<endl
      <<"输入序号并轻按回车以继续：";
  int num = 0;
  cin>>num;
  switch(num)
  {
    case 1:
      num_1();
    case 2:
      return 0;
  }
  return 0;
}

//专业结构体数组
major_class CUOG[30] = 
{
  {"安全工程","http://www.cug.edu.cn/xkjs/bkzysz.htm"},
  {"材料类","http://www.cug.edu.cn/xkjs/bkzysz.htm"},
  {"测绘类","http://www.cug.edu.cn/xkjs/bkzysz.htm"},
  {"大气科学","http://www.cug.edu.cn/xkjs/bkzysz.htm"},
  {"地理科学类","http://www.cug.edu.cn/xkjs/bkzysz.htm"},
  {"地球物理学类（地球物理与信息类","http://www.cug.edu.cn/xkjs/bkzysz.htm"},
  {"地球物理学类（菁英班）","http://www.cug.edu.cn/xkjs/bkzysz.htm"},
  {"地质类","http://www.cug.edu.cn/xkjs/bkzysz.htm"},
  {"地质学类（含国家理科基地班）","http://www.cug.edu.cn/xkjs/bkzysz.htm"},
  {"地质学类（菁英班）","http://www.cug.edu.cn/xkjs/bkzysz.htm"},
  {"电子信息类","http://www.cug.edu.cn/xkjs/bkzysz.htm"},
  {"工商管理类","http://www.cug.edu.cn/xkjs/bkzysz.htm"},
  {"管理科学与工程类","http://www.cug.edu.cn/xkjs/bkzysz.htm"},
  {"广播电视学","http://www.cug.edu.cn/xkjs/bkzysz.htm"},
  {"海洋科学类","http://www.cug.edu.cn/xkjs/bkzysz.htm"},
  {"环境科学与工程类（环境地球科学类）","http://www.cug.edu.cn/xkjs/bkzysz.htm"},
  {"机械类","http://www.cug.edu.cn/xkjs/bkzysz.htm"},
  {"计算机类","http://www.cug.edu.cn/xkjs/bkzysz.htm"},
  {"经济学类","http://www.cug.edu.cn/xkjs/bkzysz.htm"},
  {"石油工程","http://www.cug.edu.cn/xkjs/bkzysz.htm"},
  {"数学类","http://www.cug.edu.cn/xkjs/bkzysz.htm"},
  {"统计学","http://www.cug.edu.cn/xkjs/bkzysz.htm"},
  {"土地资源管理","http://www.cug.edu.cn/xkjs/bkzysz.htm"},
  {"土木类","http://www.cug.edu.cn/xkjs/bkzysz.htm"},
  {"英语","http://www.cug.edu.cn/xkjs/bkzysz.htm"},
  {"应用化学","http://www.cug.edu.cn/xkjs/bkzysz.htm"},
  {"资源勘察工程（含基地班）","http://www.cug.edu.cn/xkjs/bkzysz.htm"},
  {"自动化类","http://www.cug.edu.cn/xkjs/bkzysz.htm"}
};

//大学结构体数组
collage cup[10] = 
{
  {"1.中国地质大学(武汉)   ",10491,11467},
  {"2.中国石油大学(华东)   ",10425,13359},
  {"3.  大连海事大学       ",10151,13026},
  {"4.  中国矿业大学       ",10290,12703},
  {"5.  太原理工大学       ",10112,16854},
  {"6.    南昌大学         ",10403,18806}
};

//当按下对应键时执行的函数
void num_1()
{
  collage * p = &cup[0];
  cout<<"     "<<"院校名称"<<"    "
      <<"     "<<"院校代码"<<"    "
      <<"     "<<"最低排名"<<"    "<<endl;

  for(int i =0;i < 10;i++)
  {
    cout<<p->name<<p->code<<"            "<<p->ranking<<endl<<endl;
    p++;
  }

  cout<<"输入院校左侧序号并轻按回车以查看详情，输入0返回上层菜单："<<endl;
  int a = 0;
  cin>>a;

  switch (a) 
  {
    case 0:
    main();
    case 1:
      num_1_1();
  }

  return;
}

//相应函数1——1
void num_1_1()
{
  major_class * p1 = &CUOG[0];
  cout<<"专业类别"<<endl<<endl;

  for(int i =0;i < 28;i++)
  {
    cout<<p1->name<<"       "<<p1->website<<endl<<endl;
    p1++;
  }

  cout<<"输入0返回上层菜单："<<endl;
  int b = 0;
  cin>>b;
    if(b == 0)
    {
    }
    return;
}
