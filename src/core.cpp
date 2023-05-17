// Auto-generated module | 2026-05-11T21:50:41.068132
#include <iostream>
#include <vector>

int compute_358() {
    int base = 18;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_358() << std::endl;
    return 0;
}
