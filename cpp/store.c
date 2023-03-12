#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// ������
typedef struct Vehicle {
    char license_plate[10];  // ���ƺ�
    int price;               // ���
    struct Vehicle* next;    // ��һ����
} Vehicle;
// �̵���
typedef struct Store {
    char username[20];          // �û���
    char password[20];          // ����
    char area[20];              // ���ڵ���
    char name[20];              // �̵�����
    Vehicle* vehicle_list_head; // ��������ͷ
} Store;
// ע�ắ��
void register_store(Store* store, char* username, char* password, char* area, char* name) {
    strncpy(store->username, username, 20);
    strncpy(store->password, password, 20);
    strncpy(store->area, area, 20);
    strncpy(store->name, name, 20);
    store->vehicle_list_head = NULL;
}
// ��¼����
int login_store(Store* store, char* username, char* password) {
    return strcmp(store->username, username) == 0 && strcmp(store->password, password) == 0;
}
// ��ӳ�������
void add_vehicle(Store* store, char* license_plate, int price) {
    Vehicle* vehicle = (Vehicle*)malloc(sizeof(Vehicle));
    strncpy(vehicle->license_plate, license_plate, 10);
    vehicle->price = price;
    vehicle->next = store->vehicle_list_head;
    store->vehicle_list_head = vehicle;
}
// ��ӡ�̵���Ϣ����
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
//    char addrss[] = "��Ϫ";
//    char storeName[] = "��ϪС�Ƴ�";
//    register_store(&store,store1 ,password, addrss, storeName);
//    char id1[] = "��A00001";
//    char id2[] = "��A00002";
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