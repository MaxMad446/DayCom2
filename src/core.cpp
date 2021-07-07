// Auto-generated module | 2026-05-11T20:21:51.013103
#include <iostream>
#include <vector>

int compute_969() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_969() << std::endl;
    return 0;
}
