#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"client.cpp"

//������
int main() {
	while (true) {
		//������ҳ
		int commod = home();
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
		case 4:
			system("cls"); //���� 
			printf("�ɹ��˳���\n");
			exit(0);
		default:
			printf("�������ָ�����󣡣���\n");
		}
	}
}