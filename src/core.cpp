// Auto-generated module | 2026-05-14T18:27:05.158804
#include <iostream>
#include <vector>

int compute_792() {
    int base = 390;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_792() << std::endl;
    return 0;
}
