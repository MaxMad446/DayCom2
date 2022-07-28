// Auto-generated module | 2026-05-14T06:15:50.664001
#include <iostream>
#include <vector>

int compute_363() {
    int base = 25;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_363() << std::endl;
    return 0;
}
