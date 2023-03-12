#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//函数声明
int home(void);
void root_home_print(void);
void store_home_print(void);
void store_login_print(void);
void store_signIn_print();
int user_login_print(void);
void user_signIn_print(void);
int order_home1_print(void);
int user_home2_print();

//============================================================================主页面===================================================================================== 
int home(void) {
	printf("-------------------欢迎进入共享单车管理系统-------------------\n");
	int commod; //用户输入的序号 
	printf("       请选择你要进行的操作：\n");
	printf("       1.进入客户端\n");
	printf("       2.进入店家端\n");
	printf("       3.进入管理端\n");
	printf("       4.退出\n");
	printf("\n");
	printf("       请输入：");
	scanf("%d", &commod);
	system("cls"); //清屏 
	return commod;
}



void root_home_print(void) {
	printf("-------------------欢迎进入管理员端-------------------\n");
	int h; //用户输入的序号 
	printf("       请选择你要进行的操作：\n");
	printf("       1.登录\n");
	printf("       2.退出\n");
	printf("\n");
	printf("       请输入：");
	scanf("%d", &h);
	system("cls"); //清屏 
}



void store_home_print(void) {
	printf("-------------------欢迎进入店家端-------------------\n");
	int h; //用户输入的序号 
	printf("       请选择你要进行的操作：\n");
	printf("       1.登录\n");
	printf("       2.注册\n");
	printf("       3.退出\n");
	printf("\n");
	printf("       请输入：");
	scanf("%d", &h);
	system("cls"); //清屏 
}



void store_login_print(void) {
	printf("-------------------欢迎进入店家端登录-------------------\n");
	char Name[10];
	char password[10];
	printf("       请输入用户名\n");
	scanf("%s", Name);
	printf("       请输入密码\n");
	scanf("%s", password);
	printf("登录成功\n");
	int h; //用户输入的序号 
	printf("       请选择你要进行的操作：\n");
	printf("       1.添加车辆\n");
	printf("       2.查看\n");
	printf("       3.删除车辆\n");
	printf("       4.退出\n");
	printf("\n");
	printf("       请输入：");
	scanf("%d", &h);
	system("cls"); //清屏 
}


void store_signIn_print() {
	printf("-------------------欢迎进入店家端注册-------------------\n");
	char Name[10];
	char password[10];
	char yesPassword[10];
	char address[10];
	char logo[10];
	printf("       请输入用户名\n");
	scanf("%s", Name);
	printf("       请输入密码\n");
	scanf("%s", password);
	printf("       请确认密码\n");
	scanf("%s", yesPassword);
	printf("       请输入所在地区\n");
	scanf("%s", address);
	printf("       请输入品牌名称\n");
	scanf("%s", logo);
	printf("注册成功\n");
	system("cls"); //清屏 
}



int user_login_print(void) {
	printf("-------------------欢迎进入客户端-------------------\n");
	int commod; //用户输入的序号 
	printf("       请选择你要进行的操作：\n");
	printf("       1.登录\n");
	printf("       2.注册\n");
	printf("       3.退出\n");
	printf("\n");
	printf("       请输入：");
	scanf("%d", &commod);
	system("cls"); //清屏 
	return commod;
}


void user_signIn_print(void) {
	printf("-------------------欢迎进入客户端注册-------------------\n");
	char userName[10];
	char password[10];
	char yesPassword[10];
	printf("       请输入用户名\n");
	scanf("%s", userName);
	printf("       请输入密码");
	scanf("%s", password);
	printf("       请确认密码\n");
	scanf("%s", yesPassword);
	printf("\n");
	system("cls"); //清屏 
}


int order_home1_print(void) {
	printf("-------------------您有未结算订单-------------------\n");
	int commod;
	printf("       是否结算(1：是/0：否)\n");
	scanf("%d", &commod);
	return commod;
}
int user_home2_print() {
	printf("-------------------欢迎进入客户端注册-------------------\n");
	//跳转到客户端使用页面
	int commod; //用户输入的序号 
	printf("       请选择你要进行的操作：\n");
	printf("       1.租车\n");
	printf("       2.还车\n");
	printf("       3.充值\n");
	printf("       4.退出\n");
	printf("\n");
	printf("       请输入：");
	scanf("%d", &commod);
	system("cls"); //清屏 
	return commod;
}



int address_print(){
	printf("-------------------欢迎进入租车界面-------------------\n");
	//读取数据库，将所有店家的所有车都显示给用户
	//store_car_print();

	int commod; //用户输入的序号 
	printf("       请选择你要进行的操作：\n");
	printf("       1.根据地区筛选\n");
	printf("       2.根据价格筛选\n");
	printf("       3.直接选车\n");
	printf("       4.退出\n");
	printf("\n");
	printf("       请输入：");
	scanf("%d", &commod);
	system("cls"); //清屏 
	return commod;
}

int rent_car_tip(){
	printf("-------------------欢迎进入租车界面-------------------\n");
	int commod; //用户输入的序号 
	printf("       请输入车辆id，选择车辆：\n");
	scanf("%d", &commod);
	system("cls"); //清屏 
	return commod;
}



