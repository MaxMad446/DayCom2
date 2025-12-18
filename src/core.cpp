// Auto-generated module | 2026-05-12T04:39:26.539288
#include <iostream>
#include <vector>

int compute_221() {
    int base = 215;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_221() << std::endl;
    return 0;
}
