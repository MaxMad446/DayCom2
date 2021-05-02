// Auto-generated module | 2026-05-12T21:40:47.694669
#include <iostream>
#include <vector>

int compute_747() {
    int base = 326;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_747() << std::endl;
    return 0;
}
