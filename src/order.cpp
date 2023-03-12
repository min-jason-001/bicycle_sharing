#include <stdio.h>
// 订单类
typedef struct {
    int id;         // 订单ID
    float amount;   // 订单金额
} Order;
// 初始化函数
void init_order(Order* order, int id, float amount) {
    order->id = id;
    order->amount = amount;
}
// 打印订单信息函数
void print_order_info(Order* order) {
    printf("ID: %!!(MISSING)d(MISSING)\n", order->id);
    printf("Amount: %!!(MISSING)!(MISSING)f(MISSING)\n", order->amount);
}
//int main() {
//    Order order;
//    init_order(&order, 1, 100.0);
//    print_order_info(&order);
//    return 0;
//}