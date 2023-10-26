// Auto-generated module | 2026-05-11T22:11:59.688272
#include <iostream>
#include <vector>

int compute_827() {
    int base = 485;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_827() << std::endl;
    return 0;
}
