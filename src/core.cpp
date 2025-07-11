// Auto-generated module | 2026-05-12T21:24:27.007099
#include <iostream>
#include <vector>

int compute_736() {
    int base = 451;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_736() << std::endl;
    return 0;
}
