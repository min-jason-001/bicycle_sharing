//头文件
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"user.cpp"
#include"print.cpp"


//直接租车
void new_rent_car(){
	//租车提示
	int id = rent_car_tip();
	//遍历，找到该id的车

}

//充值
void recharge(){
	//充值提示
	printf("-------------------欢迎进入充值界面-------------------\n");

	printf("       请输入充值金额：");
	scanf("%d", &commod);
	system("cls"); //清屏 
}


//还车
void return_the_car(){

}

//租车
void rent_car(){
	while(true){
		int commod = address_print();
		switch(commod){
			case 1:
				//根据地区排序

				break;
			case 2:
				//根据价格排序

				break;
			case 3:
				//直接租车
				new_rent_car();
				break;
			case 4:
				//退出
				return;
			default:printf("您输入的指令有误~~");
		}
	}
}


//客户端注册
void signIn(){
	while(true){
		printf("-------------------欢迎进入客户端注册-------------------\n");
		char userName[10];
		char password[10];
		char yesPassword[10];
		printf("请输入用户名\n");
		scanf("%s", userName);
		printf("请输入密码\n");
		scanf("%s", password);
		printf("请确认密码\n");
		scanf("%s", yesPassword);
		if(strcmp(password,yesPassword)==0){
			//相同，注册成功,将用户账户信息保存至文件，返回客户端首页
			printf("恭喜您注册成功~~~\n");
			return;
		}else{
			//两次密码不一致
			printf("两次输入的密码不一致,请重新尝试~~\n");
		}
	}
}


//客户端首页home
int user_home() {
	while (true) {
		int commod = user_home2_print();
		switch (commod) {
		case 1:
			//租车
			rent_car();
			break;
		case 2:
			//还车
			return_the_car();
			break;
		case 3:
			//充值
			recharge();
			break;
		case 4:
			//退出
			return 0;
		default:printf("您输入的指令有误~~\n");
		}
	}
}

//客户端登录
void login() {
	//读取用户数据库

	while (true) {
		printf("是否存在用户：1/0\n");
		int n ;
		scanf("%d",&n);
		if (n==1) {
			//如果存在用户
			while (true) {
				printf("密码是否正确：1/0\n");
				int m;
				scanf("%d",&m);
				if (m==1) {
					//如果密码正确,判断用户是否有未结算订单
					printf("是否有未结算订单：1/0\n");
					int x ;
					scanf("%d",&x);
					if(x==1){
						//有
						bool rs = order_home1_print();
						if (!rs) {
							//false,取消后返回客户端client
							return;//结束函数
						}
						else {
							//结算，进入使用首页
							printf("您已成功结算滞留订单~~\n");
							int commod = user_home();
							if(commod==0){
								//退出，返回客户端
								return;
							}
						}
					}
					else{
						//无,直接进入用户首页
						int commod = user_home();
						if(commod==0){
							//退出，返回客户端
							return;
						}
					}
					
				}
				else {
					//密码错误
					printf("密码有误~~~\n");
				}
			}
			break;
		}
		else {
			//不存在用户
			printf("不存在该用户~~~\n");
		}
	}
}

//客户端
void client() {
	while (true) {
		//客户端界面
		int commod = user_login_print();
		switch (commod) {
		case 1:
			//登录
			login();
			break;
		case 2:
			//注册
			signIn();
			break;
		case 3:
			//退出
			return;
		default:
			printf("您输入的指令有误！！！\n");
		}
	}
}
