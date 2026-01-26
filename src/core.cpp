// Auto-generated module | 2026-05-12T04:44:49.067574
#include <iostream>
#include <vector>

int compute_390() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_390() << std::endl;
    return 0;
}
