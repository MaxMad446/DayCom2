// Auto-generated module | 2026-05-14T06:20:34.124572
#include <iostream>
#include <vector>

int compute_902() {
    int base = 289;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_902() << std::endl;
    return 0;
}
