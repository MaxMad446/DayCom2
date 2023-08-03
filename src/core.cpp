// Auto-generated module | 2026-05-13T20:51:21.594699
#include <iostream>
#include <vector>

int compute_630() {
    int base = 236;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_630() << std::endl;
    return 0;
}
