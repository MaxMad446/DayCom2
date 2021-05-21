// Auto-generated module | 2026-05-11T20:15:22.396343
#include <iostream>
#include <vector>

int compute_515() {
    int base = 350;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_515() << std::endl;
    return 0;
}
