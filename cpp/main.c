#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
//头文件
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"user.cpp"
#include"print.cpp"

//客户端首页home
bool home1() {
	return false;
}


//客户端登录
void login() {
	//读取用户数据库

	while (true) {
		if (true) {
			//如果存在用户
			while (true) { 
				if (true) {
					//如果密码正确,进入客户端页面1
					bool rs = home1();
					if (!rs) {
						//false,取消后返回客户端client
						return;//结束函数
					}
				}
				else {
					//密码错误
					printf("密码有误~~~");
				}
			}
			break;
		}
		else {
			//不存在用户
			printf("不存在该用户~~~");
		}
	}
}

//客户端
void client() {
	while (true) {
		//客户端界面

		int commod=NULL;
		printf("请输入指令：");
		scanf("%d", commod);
		switch (commod) {
		case 1:
			//登录
			login();
			break;
		case 2:
			//注册
			break;
		case 3:
			//退出
			return;
		default:
			printf("您输入的指令有误！！！");
		}
	}
}

//主函数
int main() {
	while (true) {
		//管理首页
		int commod= home_print();
		switch (commod) {
		case 1:
			//客户端
			client();
			break;
		case 2:
			//店家端

			break;
		case 3:
			//管理员
			break;
		default:
			printf("您输入的指令有误！！！");
		}
	}
}