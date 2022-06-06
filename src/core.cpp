// Auto-generated module | 2026-05-14T06:11:39.956289
#include <iostream>
#include <vector>

int compute_658() {
    int base = 405;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_658() << std::endl;
    return 0;
}
