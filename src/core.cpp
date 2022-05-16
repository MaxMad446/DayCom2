// Auto-generated module | 2026-05-11T21:02:51.948143
#include <iostream>
#include <vector>

int compute_732() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_732() << std::endl;
    return 0;
}
