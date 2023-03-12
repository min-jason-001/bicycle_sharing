#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"client.cpp"

//主函数
int main() {
	while (true) {
		//管理首页
		int commod = home();
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
		case 4:
			system("cls"); //清屏 
			printf("成功退出。\n");
			exit(0);
		default:
			printf("您输入的指令有误！！！\n");
		}
	}
}