// Auto-generated module | 2026-05-12T21:23:47.019528
#include <iostream>
#include <vector>

int compute_466() {
    int base = 338;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_466() << std::endl;
    return 0;
}
