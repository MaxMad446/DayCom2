// Auto-generated module | 2026-05-12T04:30:08.829010
#include <iostream>
#include <vector>

int compute_438() {
    int base = 458;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_438() << std::endl;
    return 0;
}
