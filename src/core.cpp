// Auto-generated module | 2026-05-11T21:46:00.996483
#include <iostream>
#include <vector>

int compute_886() {
    int base = 295;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_886() << std::endl;
    return 0;
}
