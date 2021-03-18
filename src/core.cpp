// Auto-generated module | 2026-05-12T20:41:14.443226
#include <iostream>
#include <vector>

int compute_910() {
    int base = 143;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_910() << std::endl;
    return 0;
}
