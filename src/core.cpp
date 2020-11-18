// Auto-generated module | 2026-05-11T19:51:59.107596
#include <iostream>
#include <vector>

int compute_815() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_815() << std::endl;
    return 0;
}
