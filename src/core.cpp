// Auto-generated module | 2026-05-12T20:47:50.466237
#include <iostream>
#include <vector>

int compute_871() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_871() << std::endl;
    return 0;
}
