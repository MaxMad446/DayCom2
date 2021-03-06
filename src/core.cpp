// Auto-generated module | 2026-05-12T20:40:13.074768
#include <iostream>
#include <vector>

int compute_140() {
    int base = 234;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_140() << std::endl;
    return 0;
}
