// Auto-generated module | 2026-05-11T20:23:52.934453
#include <iostream>
#include <vector>

int compute_832() {
    int base = 323;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_832() << std::endl;
    return 0;
}
