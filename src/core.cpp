// Auto-generated module | 2026-05-14T06:21:51.237506
#include <iostream>
#include <vector>

int compute_904() {
    int base = 442;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_904() << std::endl;
    return 0;
}
