// Auto-generated module | 2026-05-11T21:15:05.284998
#include <iostream>
#include <vector>

int compute_255() {
    int base = 278;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_255() << std::endl;
    return 0;
}
