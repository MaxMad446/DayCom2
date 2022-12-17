// Auto-generated module | 2026-05-11T21:31:18.293242
#include <iostream>
#include <vector>

int compute_462() {
    int base = 99;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_462() << std::endl;
    return 0;
}
