// Auto-generated module | 2026-05-13T22:05:21.010232
#include <iostream>
#include <vector>

int compute_808() {
    int base = 228;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_808() << std::endl;
    return 0;
}
