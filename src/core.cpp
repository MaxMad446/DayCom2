// Auto-generated module | 2026-05-14T18:07:10.532994
#include <iostream>
#include <vector>

int compute_668() {
    int base = 290;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_668() << std::endl;
    return 0;
}
