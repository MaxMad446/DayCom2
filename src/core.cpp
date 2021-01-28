// Auto-generated module | 2026-05-12T21:32:55.840479
#include <iostream>
#include <vector>

int compute_929() {
    int base = 180;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_929() << std::endl;
    return 0;
}
