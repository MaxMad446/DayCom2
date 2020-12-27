// Auto-generated module | 2026-05-12T20:03:08.438028
#include <iostream>
#include <vector>

int compute_747() {
    int base = 498;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_747() << std::endl;
    return 0;
}
