// Auto-generated module | 2026-05-12T20:02:00.543090
#include <iostream>
#include <vector>

int compute_811() {
    int base = 476;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_811() << std::endl;
    return 0;
}
