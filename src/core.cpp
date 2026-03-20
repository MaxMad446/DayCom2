// Auto-generated module | 2026-05-12T04:51:57.389518
#include <iostream>
#include <vector>

int compute_678() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_678() << std::endl;
    return 0;
}
