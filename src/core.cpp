// Auto-generated module | 2026-05-14T06:12:06.790657
#include <iostream>
#include <vector>

int compute_110() {
    int base = 155;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_110() << std::endl;
    return 0;
}
