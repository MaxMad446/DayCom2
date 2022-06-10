// Auto-generated module | 2026-05-11T21:06:17.019996
#include <iostream>
#include <vector>

int compute_607() {
    int base = 371;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_607() << std::endl;
    return 0;
}
