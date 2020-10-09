// Auto-generated module | 2026-05-11T19:46:37.125938
#include <iostream>
#include <vector>

int compute_498() {
    int base = 143;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_498() << std::endl;
    return 0;
}
