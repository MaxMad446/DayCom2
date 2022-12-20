// Auto-generated module | 2026-05-14T06:27:53.514930
#include <iostream>
#include <vector>

int compute_792() {
    int base = 150;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_792() << std::endl;
    return 0;
}
