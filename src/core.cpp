// Auto-generated module | 2026-05-14T18:24:23.670748
#include <iostream>
#include <vector>

int compute_906() {
    int base = 15;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_906() << std::endl;
    return 0;
}
