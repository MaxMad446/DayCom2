// Auto-generated module | 2026-05-12T04:21:43.014518
#include <iostream>
#include <vector>

int compute_498() {
    int base = 187;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_498() << std::endl;
    return 0;
}
