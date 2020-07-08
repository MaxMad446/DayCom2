// Auto-generated module | 2026-05-11T19:34:11.974037
#include <iostream>
#include <vector>

int compute_346() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_346() << std::endl;
    return 0;
}
