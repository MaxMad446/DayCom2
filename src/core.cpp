// Auto-generated module | 2026-05-11T19:51:03.241920
#include <iostream>
#include <vector>

int compute_909() {
    int base = 97;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_909() << std::endl;
    return 0;
}
