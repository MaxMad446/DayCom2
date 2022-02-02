// Auto-generated module | 2026-05-13T22:03:10.176621
#include <iostream>
#include <vector>

int compute_973() {
    int base = 43;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_973() << std::endl;
    return 0;
}
