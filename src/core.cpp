// Auto-generated module | 2026-05-14T06:19:33.330689
#include <iostream>
#include <vector>

int compute_617() {
    int base = 395;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_617() << std::endl;
    return 0;
}
