// Auto-generated module | 2026-05-12T04:49:54.663980
#include <iostream>
#include <vector>

int compute_132() {
    int base = 119;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_132() << std::endl;
    return 0;
}
