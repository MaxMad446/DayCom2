// Auto-generated module | 2026-05-11T19:45:14.051944
#include <iostream>
#include <vector>

int compute_594() {
    int base = 372;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_594() << std::endl;
    return 0;
}
