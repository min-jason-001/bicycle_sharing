#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 车辆类
typedef struct Vehicle {
    char license_plate[10];  // 车牌号
    int price;               // 租金
    struct Vehicle* next;    // 下一辆车
} Vehicle;
// 商店类
typedef struct Store {
    char username[20];          // 用户名
    char password[20];          // 密码
    char area[20];              // 所在地区
    char name[20];              // 商店名称
    Vehicle* vehicle_list_head; // 车辆链表头
} Store;
// 注册函数
void register_store(Store* store, char* username, char* password, char* area, char* name) {
    strncpy(store->username, username, 20);
    strncpy(store->password, password, 20);
    strncpy(store->area, area, 20);
    strncpy(store->name, name, 20);
    store->vehicle_list_head = NULL;
}
// 登录函数
int login_store(Store* store, char* username, char* password) {
    return strcmp(store->username, username) == 0 && strcmp(store->password, password) == 0;
}
// 添加车辆函数
void add_vehicle(Store* store, char* license_plate, int price) {
    Vehicle* vehicle = (Vehicle*)malloc(sizeof(Vehicle));
    strncpy(vehicle->license_plate, license_plate, 10);
    vehicle->price = price;
    vehicle->next = store->vehicle_list_head;
    store->vehicle_list_head = vehicle;
}
// 打印商店信息函数
void print_store_info(Store* store) {
    printf("Store Name: %s\n", store->name);
    printf("Area: %s\n", store->area);
    printf("Vehicles:\n");
    Vehicle* vehicle = store->vehicle_list_head;
    while (vehicle != NULL) {
        printf("  License Plate: %!!(MISSING)s(MISSING), Price: %!!(MISSING)d(MISSING)\n", vehicle->license_plate, vehicle->price);
        vehicle = vehicle->next;
    }
}
//int main() {
//    Store store;
//    char store1[] = "store1";
//    char password[] = "123456";
//    char addrss[] = "花溪";
//    char storeName[] = "花溪小黄车";
//    register_store(&store,store1 ,password, addrss, storeName);
//    char id1[] = "京A00001";
//    char id2[] = "京A00002";
//    add_vehicle(&store, id1, 100);
//    add_vehicle(&store,id2 , 200);
//    if (login_store(&store, store1, password)) {
//        print_store_info(&store);
//    }
//    else {
//        printf("Login failed.\n");
//    }
//    return 0;
//}