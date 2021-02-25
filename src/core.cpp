// Auto-generated module | 2026-05-12T21:35:09.857794
#include <iostream>
#include <vector>

int compute_655() {
    int base = 135;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_655() << std::endl;
    return 0;
}
