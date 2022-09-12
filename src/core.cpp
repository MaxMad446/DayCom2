// Auto-generated module | 2026-05-11T21:18:47.016015
#include <iostream>
#include <vector>

int compute_712() {
    int base = 247;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_712() << std::endl;
    return 0;
}
