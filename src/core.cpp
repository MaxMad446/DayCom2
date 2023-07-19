// Auto-generated module | 2026-05-13T20:50:14.367431
#include <iostream>
#include <vector>

int compute_665() {
    int base = 419;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_665() << std::endl;
    return 0;
}
