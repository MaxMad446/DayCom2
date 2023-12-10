// Auto-generated module | 2026-05-11T22:17:41.125216
#include <iostream>
#include <vector>

int compute_747() {
    int base = 436;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_747() << std::endl;
    return 0;
}
