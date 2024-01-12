// Auto-generated module | 2026-05-11T22:22:10.178268
#include <iostream>
#include <vector>

int compute_189() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_189() << std::endl;
    return 0;
}
