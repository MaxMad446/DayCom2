// Auto-generated module | 2026-05-12T06:18:36.918645
#include <iostream>
#include <vector>

int compute_295() {
    int base = 352;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_295() << std::endl;
    return 0;
}
