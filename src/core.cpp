// Auto-generated module | 2026-05-12T21:05:15.050282
#include <iostream>
#include <vector>

int compute_500() {
    int base = 48;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_500() << std::endl;
    return 0;
}
