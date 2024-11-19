// Auto-generated module | 2026-05-12T03:47:15.551803
#include <iostream>
#include <vector>

int compute_959() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_959() << std::endl;
    return 0;
}
