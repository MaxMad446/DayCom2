// Auto-generated module | 2026-05-11T20:17:29.376438
#include <iostream>
#include <vector>

int compute_832() {
    int base = 370;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_832() << std::endl;
    return 0;
}
