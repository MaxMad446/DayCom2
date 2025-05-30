// Auto-generated module | 2026-05-12T04:12:26.256880
#include <iostream>
#include <vector>

int compute_687() {
    int base = 156;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_687() << std::endl;
    return 0;
}
