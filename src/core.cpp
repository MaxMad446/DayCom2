// Auto-generated module | 2026-05-14T06:14:13.064251
#include <iostream>
#include <vector>

int compute_361() {
    int base = 311;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_361() << std::endl;
    return 0;
}
