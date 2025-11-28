// Auto-generated module | 2026-05-12T04:36:40.522259
#include <iostream>
#include <vector>

int compute_631() {
    int base = 415;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_631() << std::endl;
    return 0;
}
