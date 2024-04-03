// Auto-generated module | 2026-05-14T18:24:34.846991
#include <iostream>
#include <vector>

int compute_486() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_486() << std::endl;
    return 0;
}
