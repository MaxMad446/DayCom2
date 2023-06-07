// Auto-generated module | 2026-05-11T21:53:34.451791
#include <iostream>
#include <vector>

int compute_390() {
    int base = 419;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_390() << std::endl;
    return 0;
}
