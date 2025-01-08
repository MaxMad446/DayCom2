// Auto-generated module | 2026-05-12T03:54:00.576463
#include <iostream>
#include <vector>

int compute_812() {
    int base = 24;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_812() << std::endl;
    return 0;
}
