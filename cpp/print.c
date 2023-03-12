#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
//============================================================================主页面===================================================================================== 
int home_print(void) {
	printf("-------------------欢迎进入共享单车管理系统-------------------\n");
	int commod=NULL; //用户输入的序号 
	printf("       请选择你要进行的操作：\n");
	printf("       1.进入管理员端\n");
	printf("       2.进入店家端\n");
	printf("       3.进入客户端\n");
	printf("\n");
	printf("       请输入：");
	scanf("%d", &commod);
	system("cls"); //清屏 
	return commod;
}
 


void home(void) {
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



 void store_print(void) {
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
 
 
 
 void store_login(void) {
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
 
 
 void store_signIn() {
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
 
 

 void user_print(void) {
	 printf("-------------------欢迎进入客户端-------------------\n");
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


 void user_signIn(void) {
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
 
 
 
 void home1_print(void) {
	 printf("-------------------您有未结算订单-------------------\n");
	 int h;
	 printf("       是否结算(1：是/0：否)\n");
	 scanf("%d", &h);
 }
 void home2_print() {
	 printf("-------------------您已经成功结算滞留订单-------------------\n");
	 //跳转到客户端使用页面
	 int h; //用户输入的序号 
	 printf("       请选择你要进行的操作：\n");
	 printf("       1.租车\n");
	 printf("       2.还车\n");
	 printf("       3.充值\n");
	 printf("       4.退出\n");
	 printf("\n");
	 printf("       请输入：");
	 scanf("%d", &h);
	 system("cls"); //清屏 
 }
 

