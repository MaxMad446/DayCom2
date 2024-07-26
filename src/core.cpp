// Auto-generated module | 2026-05-11T22:47:39.663012
#include <iostream>
#include <vector>

int compute_895() {
    int base = 47;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_895() << std::endl;
    return 0;
}
