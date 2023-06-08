// Auto-generated module | 2026-05-11T21:53:43.232412
#include <iostream>
#include <vector>

int compute_895() {
    int base = 338;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_895() << std::endl;
    return 0;
}
