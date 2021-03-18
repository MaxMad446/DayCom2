// Auto-generated module | 2026-05-12T21:36:51.656948
#include <iostream>
#include <vector>

int compute_151() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_151() << std::endl;
    return 0;
}
