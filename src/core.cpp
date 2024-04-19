// Auto-generated module | 2026-05-14T18:25:59.587433
#include <iostream>
#include <vector>

int compute_674() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_674() << std::endl;
    return 0;
}
