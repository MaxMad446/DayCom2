// Auto-generated module | 2026-05-11T20:26:58.677248
#include <iostream>
#include <vector>

int compute_980() {
    int base = 323;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_980() << std::endl;
    return 0;
}
