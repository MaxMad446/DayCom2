// Auto-generated module | 2026-05-12T04:37:48.141999
#include <iostream>
#include <vector>

int compute_655() {
    int base = 390;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_655() << std::endl;
    return 0;
}
