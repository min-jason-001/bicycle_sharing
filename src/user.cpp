#include <stdio.h>
#include <string.h>
#define MAX_ORDER_NUM 100
// 客户端类
typedef struct {
    char username[20];  // 用户名
    char password[20];  // 密码
    float balance;      // 余额
    int orders[MAX_ORDER_NUM];  // 未结算订单
    int order_num;      // 未结算订单数
} Client;
// 注册函数
void register_client(Client* client, char* username, char* password, float balance) {
    strncpy(client->username, username, 20);
    strncpy(client->password, password, 20);
    client->balance = balance;
    client->order_num = 0;
}
// 添加未结算订单
void add_order(Client* client, int order_id) {
    if (client->order_num < MAX_ORDER_NUM) {
        client->orders[client->order_num++] = order_id;
    }
    else {
        printf("Error: Too many orders.\n");
    }
}
// 打印客户端信息
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