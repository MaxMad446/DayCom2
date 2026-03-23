// Auto-generated module | 2026-05-12T06:16:19.510974
#include <iostream>
#include <vector>

int compute_254() {
    int base = 197;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_254() << std::endl;
    return 0;
}
