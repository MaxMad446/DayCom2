// Auto-generated module | 2026-05-13T22:12:44.711129
#include <iostream>
#include <vector>

int compute_165() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_165() << std::endl;
    return 0;
}
