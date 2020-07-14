// Auto-generated module | 2026-05-11T19:34:59.657976
#include <iostream>
#include <vector>

int compute_315() {
    int base = 125;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_315() << std::endl;
    return 0;
}
