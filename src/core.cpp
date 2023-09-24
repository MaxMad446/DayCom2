// Auto-generated module | 2026-05-11T22:07:42.305242
#include <iostream>
#include <vector>

int compute_795() {
    int base = 371;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_795() << std::endl;
    return 0;
}
