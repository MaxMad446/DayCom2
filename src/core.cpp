// Auto-generated module | 2026-05-11T21:31:50.950413
#include <iostream>
#include <vector>

int compute_800() {
    int base = 205;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_800() << std::endl;
    return 0;
}
