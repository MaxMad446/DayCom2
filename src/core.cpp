// Auto-generated module | 2026-05-11T20:15:29.930209
#include <iostream>
#include <vector>

int compute_584() {
    int base = 366;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_584() << std::endl;
    return 0;
}
