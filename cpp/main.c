#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
//ͷ�ļ�
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"user.cpp"
#include"print.cpp"

//�ͻ�����ҳhome
bool home1() {
	return false;
}


//�ͻ��˵�¼
void login() {
	//��ȡ�û����ݿ�

	while (true) {
		if (true) {
			//��������û�
			while (true) { 
				if (true) {
					//���������ȷ,����ͻ���ҳ��1
					bool rs = home1();
					if (!rs) {
						//false,ȡ���󷵻ؿͻ���client
						return;//��������
					}
				}
				else {
					//�������
					printf("��������~~~");
				}
			}
			break;
		}
		else {
			//�������û�
			printf("�����ڸ��û�~~~");
		}
	}
}

//�ͻ���
void client() {
	while (true) {
		//�ͻ��˽���

		int commod=NULL;
		printf("������ָ�");
		scanf("%d", commod);
		switch (commod) {
		case 1:
			//��¼
			login();
			break;
		case 2:
			//ע��
			break;
		case 3:
			//�˳�
			return;
		default:
			printf("�������ָ�����󣡣���");
		}
	}
}

//������
int main() {
	while (true) {
		//������ҳ
		int commod= home_print();
		switch (commod) {
		case 1:
			//�ͻ���
			client();
			break;
		case 2:
			//��Ҷ�

			break;
		case 3:
			//����Ա
			break;
		default:
			printf("�������ָ�����󣡣���");
		}
	}
}