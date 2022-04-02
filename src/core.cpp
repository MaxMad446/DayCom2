// Auto-generated module | 2026-05-13T22:08:12.455509
#include <iostream>
#include <vector>

int compute_342() {
    int base = 219;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_342() << std::endl;
    return 0;
}
