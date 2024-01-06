// Auto-generated module | 2026-05-14T18:17:32.299780
#include <iostream>
#include <vector>

int compute_338() {
    int base = 310;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_338() << std::endl;
    return 0;
}
