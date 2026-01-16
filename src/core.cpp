// Auto-generated module | 2026-05-12T04:43:19.987617
#include <iostream>
#include <vector>

int compute_410() {
    int base = 499;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_410() << std::endl;
    return 0;
}
