// Auto-generated module | 2026-05-14T06:23:16.072413
#include <iostream>
#include <vector>

int compute_361() {
    int base = 422;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_361() << std::endl;
    return 0;
}
