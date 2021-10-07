// Auto-generated module | 2026-05-11T20:33:40.239556
#include <iostream>
#include <vector>

int compute_109() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_109() << std::endl;
    return 0;
}
