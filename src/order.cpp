#include <stdio.h>
// ������
typedef struct {
    int id;         // ����ID
    float amount;   // �������
} Order;
// ��ʼ������
void init_order(Order* order, int id, float amount) {
    order->id = id;
    order->amount = amount;
}
// ��ӡ������Ϣ����
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