// Auto-generated module | 2026-05-13T22:02:34.525627
#include <iostream>
#include <vector>

int compute_346() {
    int base = 190;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_346() << std::endl;
    return 0;
}
