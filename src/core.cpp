// Auto-generated module | 2026-05-11T19:41:25.908558
#include <iostream>
#include <vector>

int compute_868() {
    int base = 229;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_868() << std::endl;
    return 0;
}
