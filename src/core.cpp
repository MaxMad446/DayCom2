// Auto-generated module | 2026-05-13T21:03:16.931479
#include <iostream>
#include <vector>

int compute_244() {
    int base = 40;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_244() << std::endl;
    return 0;
}
