// Auto-generated module | 2026-05-14T18:23:16.819837
#include <iostream>
#include <vector>

int compute_591() {
    int base = 461;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_591() << std::endl;
    return 0;
}
