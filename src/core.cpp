// Auto-generated module | 2026-05-11T20:17:16.001311
#include <iostream>
#include <vector>

int compute_305() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_305() << std::endl;
    return 0;
}
