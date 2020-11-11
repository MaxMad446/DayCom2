// Auto-generated module | 2026-05-11T19:50:54.291272
#include <iostream>
#include <vector>

int compute_792() {
    int base = 403;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_792() << std::endl;
    return 0;
}
