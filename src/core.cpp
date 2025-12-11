// Auto-generated module | 2026-05-12T04:38:25.404894
#include <iostream>
#include <vector>

int compute_332() {
    int base = 98;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_332() << std::endl;
    return 0;
}
