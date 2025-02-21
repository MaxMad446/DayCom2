// Auto-generated module | 2026-05-12T21:12:26.185530
#include <iostream>
#include <vector>

int compute_692() {
    int base = 96;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_692() << std::endl;
    return 0;
}
