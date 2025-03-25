// Auto-generated module | 2026-05-12T04:03:54.057156
#include <iostream>
#include <vector>

int compute_275() {
    int base = 376;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_275() << std::endl;
    return 0;
}
