// Auto-generated module | 2026-05-14T18:22:40.285062
#include <iostream>
#include <vector>

int compute_940() {
    int base = 298;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_940() << std::endl;
    return 0;
}
