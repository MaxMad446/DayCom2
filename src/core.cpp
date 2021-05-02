// Auto-generated module | 2026-05-11T20:13:00.773747
#include <iostream>
#include <vector>

int compute_294() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_294() << std::endl;
    return 0;
}
