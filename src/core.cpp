// Auto-generated module | 2026-05-11T21:06:01.927418
#include <iostream>
#include <vector>

int compute_761() {
    int base = 232;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_761() << std::endl;
    return 0;
}
