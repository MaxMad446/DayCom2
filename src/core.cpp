// Auto-generated module | 2026-05-11T21:11:27.015365
#include <iostream>
#include <vector>

int compute_270() {
    int base = 428;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_270() << std::endl;
    return 0;
}
