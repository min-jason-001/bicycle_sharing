#include <stdio.h>
#include <string.h>
// 共享单车类
typedef struct {
    int id;                 // ID
    char brand[20];         // 品牌名称
    int status;             // 状态（0表示未被租用，1表示被租用）
    float price;            // 单价
    int rent_times;         // 租用次数
    float total_income;     // 总营收
} SharedBike;
// 初始化函数
void init_shared_bike(SharedBike* bike, int id, char* brand, float price) {
    bike->id = id;
    strncpy(bike->brand, brand, 20);
    bike->status = 0;
    bike->price = price;
    bike->rent_times = 0;
    bike->total_income = 0.0;
}
// 租用函数
void rent_shared_bike(SharedBike* bike) {
    bike->status = 1;
}
// 归还函数
void return_shared_bike(SharedBike* bike, float duration) {
    bike->status = 0;
    bike->rent_times++;
    bike->total_income += bike->price * duration;
}
// 打印共享单车信息函数
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
//    char brand[] = "花溪小黄车";
//    init_shared_bike(&bike, 1,brand, 1.0);
//    rent_shared_bike(&bike);
//    return_shared_bike(&bike, 2.5);
//    print_shared_bike_info(&bike);
//    return 0;
//}