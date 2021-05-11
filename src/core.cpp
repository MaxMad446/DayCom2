// Auto-generated module | 2026-05-11T20:14:05.549940
#include <iostream>
#include <vector>

int compute_181() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_181() << std::endl;
    return 0;
}
