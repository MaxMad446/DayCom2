// Auto-generated module | 2026-05-14T06:23:47.753858
#include <iostream>
#include <vector>

int compute_795() {
    int base = 203;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_795() << std::endl;
    return 0;
}
