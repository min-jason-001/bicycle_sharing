#include <stdio.h>
#include <string.h>
// ��������
typedef struct {
    int id;                 // ID
    char brand[20];         // Ʒ������
    int status;             // ״̬��0��ʾδ�����ã�1��ʾ�����ã�
    float price;            // ����
    int rent_times;         // ���ô���
    float total_income;     // ��Ӫ��
} SharedBike;
// ��ʼ������
void init_shared_bike(SharedBike* bike, int id, char* brand, float price) {
    bike->id = id;
    strncpy(bike->brand, brand, 20);
    bike->status = 0;
    bike->price = price;
    bike->rent_times = 0;
    bike->total_income = 0.0;
}
// ���ú���
void rent_shared_bike(SharedBike* bike) {
    bike->status = 1;
}
// �黹����
void return_shared_bike(SharedBike* bike, float duration) {
    bike->status = 0;
    bike->rent_times++;
    bike->total_income += bike->price * duration;
}
// ��ӡ��������Ϣ����
void print_shared_bike_info(SharedBike* bike) {
    printf("ID: %d\n", bike->id);
    printf("Brand: %s\n", bike->brand);
    printf("Price: %.2f\n", bike->price);
    printf("Status: %d\n", bike->status);
    printf("Rent Times: %d\n", bike->rent_times);
    printf("Total Income: %.2f\n", bike->total_income);
}
//int main() {
//    SharedBike bike;
//    char brand[] = "��ϪС�Ƴ�";
//    init_shared_bike(&bike, 1,brand, 1.0);
//    rent_shared_bike(&bike);
//    return_shared_bike(&bike, 2.5);
//    print_shared_bike_info(&bike);
//    return 0;
//}