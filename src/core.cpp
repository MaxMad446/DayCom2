// Auto-generated module | 2026-05-12T04:49:45.551967
#include <iostream>
#include <vector>

int compute_114() {
    int base = 123;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_114() << std::endl;
    return 0;
}
