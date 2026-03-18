// Auto-generated module | 2026-05-12T04:51:42.523257
#include <iostream>
#include <vector>

int compute_937() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_937() << std::endl;
    return 0;
}
