#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
//============================================================================��ҳ��===================================================================================== 
int home_print(void) {
	printf("-------------------��ӭ���빲��������ϵͳ-------------------\n");
	int commod=NULL; //�û��������� 
	printf("       ��ѡ����Ҫ���еĲ�����\n");
	printf("       1.�������Ա��\n");
	printf("       2.�����Ҷ�\n");
	printf("       3.����ͻ���\n");
	printf("\n");
	printf("       �����룺");
	scanf("%d", &commod);
	system("cls"); //���� 
	return commod;
}
 


void home(void) {
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



 void store_print(void) {
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
 
 
 
 void store_login(void) {
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
 
 
 void store_signIn() {
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
 
 

 void user_print(void) {
	 printf("-------------------��ӭ����ͻ���-------------------\n");
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


 void user_signIn(void) {
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
 
 
 
 void home1_print(void) {
	 printf("-------------------����δ���㶩��-------------------\n");
	 int h;
	 printf("       �Ƿ����(1����/0����)\n");
	 scanf("%d", &h);
 }
 void home2_print() {
	 printf("-------------------���Ѿ��ɹ�������������-------------------\n");
	 //��ת���ͻ���ʹ��ҳ��
	 int h; //�û��������� 
	 printf("       ��ѡ����Ҫ���еĲ�����\n");
	 printf("       1.�⳵\n");
	 printf("       2.����\n");
	 printf("       3.��ֵ\n");
	 printf("       4.�˳�\n");
	 printf("\n");
	 printf("       �����룺");
	 scanf("%d", &h);
	 system("cls"); //���� 
 }
 

