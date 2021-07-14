// Auto-generated module | 2026-05-11T20:22:51.604489
#include <iostream>
#include <vector>

int compute_883() {
    int base = 20;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_883() << std::endl;
    return 0;
}
