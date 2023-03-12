#include <stdio.h>
#include <string.h>
#define MAX_ORDER_NUM 100
// �ͻ�����
typedef struct {
    char username[20];  // �û���
    char password[20];  // ����
    float balance;      // ���
    int orders[MAX_ORDER_NUM];  // δ���㶩��
    int order_num;      // δ���㶩����
} Client;
// ע�ắ��
void register_client(Client* client, char* username, char* password, float balance) {
    strncpy(client->username, username, 20);
    strncpy(client->password, password, 20);
    client->balance = balance;
    client->order_num = 0;
}
// ���δ���㶩��
void add_order(Client* client, int order_id) {
    if (client->order_num < MAX_ORDER_NUM) {
        client->orders[client->order_num++] = order_id;
    }
    else {
        printf("Error: Too many orders.\n");
    }
}
// ��ӡ�ͻ�����Ϣ
void print_client_info(Client* client) {
    printf("Username: %!s(MISSING)\n", client->username);
    printf("Balance: %!f(MISSING)\n", client->balance);
    printf("Orders: ");
    for (int i = 0; i < client->order_num; i++) {
        printf("%!d(MISSING) ", client->orders[i]);
    }
    printf("\n");
}
//int main() {
//    Client client;
//    char alice[] = "Alice";
//    char password[] = "123456";
//    register_client(&client, alice,password , 100.0);
//    add_order(&client, 1);
//    add_order(&client, 2);
//    print_client_info(&client);
//    return 0;
//}