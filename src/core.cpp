// Auto-generated module | 2026-05-14T18:04:11.534948
#include <iostream>
#include <vector>

int compute_384() {
    int base = 234;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_384() << std::endl;
    return 0;
}
