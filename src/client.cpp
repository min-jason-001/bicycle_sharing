//ͷ�ļ�
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"user.cpp"
#include"print.cpp"


//ֱ���⳵
void new_rent_car(){
	//�⳵��ʾ
	int id = rent_car_tip();
	//�������ҵ���id�ĳ�

}

//��ֵ
void recharge(){
	//��ֵ��ʾ
	printf("-------------------��ӭ�����ֵ����-------------------\n");
	int commod; //�û��������� 
	printf("       �����룺");
	scanf("%d", &commod);
	system("cls"); //���� 
}


//����
void return_the_car(){

}

//�⳵
void rent_car(){
	while(true){
		int commod = address_print();
		switch(commod){
			case 1:
				//���ݵ�������

				break;
			case 2:
				//���ݼ۸�����

				break;
			case 3:
				//ֱ���⳵
				new_rent_car();
				break;
			case 4:
				//�˳�
				return;
			default:printf("�������ָ������~~");
		}
	}
}


//�ͻ���ע��
void signIn(){
	while(true){
		printf("-------------------��ӭ����ͻ���ע��-------------------\n");
		char userName[10];
		char password[10];
		char yesPassword[10];
		printf("�������û���\n");
		scanf("%s", userName);
		printf("����������\n");
		scanf("%s", password);
		printf("��ȷ������\n");
		scanf("%s", yesPassword);
		if(strcmp(password,yesPassword)==0){
			//��ͬ��ע��ɹ�,���û��˻���Ϣ�������ļ������ؿͻ�����ҳ
			printf("��ϲ��ע��ɹ�~~~\n");
			return;
		}else{
			//�������벻һ��
			printf("������������벻һ��,�����³���~~\n");
		}
	}
}


//�ͻ�����ҳhome
int user_home() {
	while (true) {
		int commod = user_home2_print();
		switch (commod) {
		case 1:
			//�⳵
			rent_car();
			break;
		case 2:
			//����
			return_the_car();
			break;
		case 3:
			//��ֵ
			recharge();
			break;
		case 4:
			//�˳�
			return 0;
		default:printf("�������ָ������~~\n");
		}
	}
}

//�ͻ��˵�¼
void login() {
	//��ȡ�û����ݿ�

	while (true) {
		printf("�Ƿ�����û���1/0\n");
		int n ;
		scanf("%d",&n);
		if (n==1) {
			//��������û�
			while (true) {
				printf("�����Ƿ���ȷ��1/0\n");
				int m;
				scanf("%d",&m);
				if (m==1) {
					//���������ȷ,�ж��û��Ƿ���δ���㶩��
					printf("�Ƿ���δ���㶩����1/0\n");
					int x ;
					scanf("%d",&x);
					if(x==1){
						//��
						bool rs = order_home1_print();
						if (!rs) {
							//false,ȡ���󷵻ؿͻ���client
							return;//��������
						}
						else {
							//���㣬����ʹ����ҳ
							printf("���ѳɹ�������������~~\n");
							int commod = user_home();
							if(commod==0){
								//�˳������ؿͻ���
								return;
							}
						}
					}
					else{
						//��,ֱ�ӽ����û���ҳ
						int commod = user_home();
						if(commod==0){
							//�˳������ؿͻ���
							return;
						}
					}
					
				}
				else {
					//�������
					printf("��������~~~\n");
				}
			}
			break;
		}
		else {
			//�������û�
			printf("�����ڸ��û�~~~\n");
		}
	}
}

//�ͻ���
void client() {
	while (true) {
		//�ͻ��˽���
		int commod = user_login_print();
		switch (commod) {
		case 1:
			//��¼
			login();
			break;
		case 2:
			//ע��
			signIn();
			break;
		case 3:
			//�˳�
			return;
		default:
			printf("�������ָ�����󣡣���\n");
		}
	}
}