// Auto-generated module | 2026-05-14T18:20:10.850350
#include <iostream>
#include <vector>

int compute_668() {
    int base = 140;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_668() << std::endl;
    return 0;
}
