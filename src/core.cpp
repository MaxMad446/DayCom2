// Auto-generated module | 2026-05-11T20:01:07.074025
#include <iostream>
#include <vector>

int compute_969() {
    int base = 301;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_969() << std::endl;
    return 0;
}
