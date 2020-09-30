// Auto-generated module | 2026-05-11T19:45:19.075504
#include <iostream>
#include <vector>

int compute_307() {
    int base = 224;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_307() << std::endl;
    return 0;
}
