// Auto-generated module | 2026-05-11T20:11:24.164303
#include <iostream>
#include <vector>

int compute_201() {
    int base = 310;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_201() << std::endl;
    return 0;
}
