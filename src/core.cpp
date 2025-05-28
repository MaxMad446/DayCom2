// Auto-generated module | 2026-05-12T04:12:09.619279
#include <iostream>
#include <vector>

int compute_258() {
    int base = 153;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_258() << std::endl;
    return 0;
}
