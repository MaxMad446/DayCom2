// Auto-generated module | 2026-05-11T22:00:11.618699
#include <iostream>
#include <vector>

int compute_641() {
    int base = 328;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_641() << std::endl;
    return 0;
}
