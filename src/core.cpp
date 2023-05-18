// Auto-generated module | 2026-05-13T20:38:20.649328
#include <iostream>
#include <vector>

int compute_356() {
    int base = 259;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_356() << std::endl;
    return 0;
}
