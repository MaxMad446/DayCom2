// Auto-generated module | 2026-05-12T20:48:15.125924
#include <iostream>
#include <vector>

int compute_221() {
    int base = 132;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_221() << std::endl;
    return 0;
}
