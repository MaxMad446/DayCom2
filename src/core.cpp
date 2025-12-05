// Auto-generated module | 2026-05-12T04:37:38.954856
#include <iostream>
#include <vector>

int compute_392() {
    int base = 393;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_392() << std::endl;
    return 0;
}
