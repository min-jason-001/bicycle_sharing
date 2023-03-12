#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//��������
int home(void);
void root_home_print(void);
void store_home_print(void);
void store_login_print(void);
void store_signIn_print();
int user_login_print(void);
void user_signIn_print(void);
int order_home1_print(void);
int user_home2_print();

//============================================================================��ҳ��===================================================================================== 
int home(void) {
	printf("-------------------��ӭ���빲��������ϵͳ-------------------\n");
	int commod; //�û��������� 
	printf("       ��ѡ����Ҫ���еĲ�����\n");
	printf("       1.����ͻ���\n");
	printf("       2.�����Ҷ�\n");
	printf("       3.��������\n");
	printf("       4.�˳�\n");
	printf("\n");
	printf("       �����룺");
	scanf("%d", &commod);
	system("cls"); //���� 
	return commod;
}



void root_home_print(void) {
	printf("-------------------��ӭ�������Ա��-------------------\n");
	int h; //�û��������� 
	printf("       ��ѡ����Ҫ���еĲ�����\n");
	printf("       1.��¼\n");
	printf("       2.�˳�\n");
	printf("\n");
	printf("       �����룺");
	scanf("%d", &h);
	system("cls"); //���� 
}



void store_home_print(void) {
	printf("-------------------��ӭ�����Ҷ�-------------------\n");
	int h; //�û��������� 
	printf("       ��ѡ����Ҫ���еĲ�����\n");
	printf("       1.��¼\n");
	printf("       2.ע��\n");
	printf("       3.�˳�\n");
	printf("\n");
	printf("       �����룺");
	scanf("%d", &h);
	system("cls"); //���� 
}



void store_login_print(void) {
	printf("-------------------��ӭ�����Ҷ˵�¼-------------------\n");
	char Name[10];
	char password[10];
	printf("       �������û���\n");
	scanf("%s", Name);
	printf("       ����������\n");
	scanf("%s", password);
	printf("��¼�ɹ�\n");
	int h; //�û��������� 
	printf("       ��ѡ����Ҫ���еĲ�����\n");
	printf("       1.��ӳ���\n");
	printf("       2.�鿴\n");
	printf("       3.ɾ������\n");
	printf("       4.�˳�\n");
	printf("\n");
	printf("       �����룺");
	scanf("%d", &h);
	system("cls"); //���� 
}


void store_signIn_print() {
	printf("-------------------��ӭ�����Ҷ�ע��-------------------\n");
	char Name[10];
	char password[10];
	char yesPassword[10];
	char address[10];
	char logo[10];
	printf("       �������û���\n");
	scanf("%s", Name);
	printf("       ����������\n");
	scanf("%s", password);
	printf("       ��ȷ������\n");
	scanf("%s", yesPassword);
	printf("       ���������ڵ���\n");
	scanf("%s", address);
	printf("       ������Ʒ������\n");
	scanf("%s", logo);
	printf("ע��ɹ�\n");
	system("cls"); //���� 
}



int user_login_print(void) {
	printf("-------------------��ӭ����ͻ���-------------------\n");
	int commod; //�û��������� 
	printf("       ��ѡ����Ҫ���еĲ�����\n");
	printf("       1.��¼\n");
	printf("       2.ע��\n");
	printf("       3.�˳�\n");
	printf("\n");
	printf("       �����룺");
	scanf("%d", &commod);
	system("cls"); //���� 
	return commod;
}


void user_signIn_print(void) {
	printf("-------------------��ӭ����ͻ���ע��-------------------\n");
	char userName[10];
	char password[10];
	char yesPassword[10];
	printf("       �������û���\n");
	scanf("%s", userName);
	printf("       ����������");
	scanf("%s", password);
	printf("       ��ȷ������\n");
	scanf("%s", yesPassword);
	printf("\n");
	system("cls"); //���� 
}


int order_home1_print(void) {
	printf("-------------------����δ���㶩��-------------------\n");
	int commod;
	printf("       �Ƿ����(1����/0����)\n");
	scanf("%d", &commod);
	return commod;
}
int user_home2_print() {
	printf("-------------------��ӭ����ͻ���ע��-------------------\n");
	//��ת���ͻ���ʹ��ҳ��
	int commod; //�û��������� 
	printf("       ��ѡ����Ҫ���еĲ�����\n");
	printf("       1.�⳵\n");
	printf("       2.����\n");
	printf("       3.��ֵ\n");
	printf("       4.�˳�\n");
	printf("\n");
	printf("       �����룺");
	scanf("%d", &commod);
	system("cls"); //���� 
	return commod;
}



int address_print(){
	printf("-------------------��ӭ�����⳵����-------------------\n");
	//��ȡ���ݿ⣬�����е�ҵ����г�����ʾ���û�
	//store_car_print();

	int commod; //�û��������� 
	printf("       ��ѡ����Ҫ���еĲ�����\n");
	printf("       1.���ݵ���ɸѡ\n");
	printf("       2.���ݼ۸�ɸѡ\n");
	printf("       3.ֱ��ѡ��\n");
	printf("       4.�˳�\n");
	printf("\n");
	printf("       �����룺");
	scanf("%d", &commod);
	system("cls"); //���� 
	return commod;
}

int rent_car_tip(){
	printf("-------------------��ӭ�����⳵����-------------------\n");
	int commod; //�û��������� 
	printf("       �����복��id��ѡ������\n");
	scanf("%d", &commod);
	system("cls"); //���� 
	return commod;
}



