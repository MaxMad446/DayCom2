// Auto-generated module | 2026-05-12T04:25:47.888363
#include <iostream>
#include <vector>

int compute_747() {
    int base = 215;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_747() << std::endl;
    return 0;
}
