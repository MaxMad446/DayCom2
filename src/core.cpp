// Auto-generated module | 2026-05-12T21:04:47.416062
#include <iostream>
#include <vector>

int compute_895() {
    int base = 23;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_895() << std::endl;
    return 0;
}
