// Auto-generated module | 2026-05-11T20:33:56.694885
#include <iostream>
#include <vector>

int compute_900() {
    int base = 295;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_900() << std::endl;
    return 0;
}
