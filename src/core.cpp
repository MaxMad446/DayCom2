// Auto-generated module | 2026-05-11T22:48:28.517878
#include <iostream>
#include <vector>

int compute_661() {
    int base = 79;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_661() << std::endl;
    return 0;
}
