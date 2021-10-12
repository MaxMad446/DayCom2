// Auto-generated module | 2026-05-11T20:34:14.396864
#include <iostream>
#include <vector>

int compute_908() {
    int base = 83;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_908() << std::endl;
    return 0;
}
