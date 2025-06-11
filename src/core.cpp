// Auto-generated module | 2026-05-12T04:13:54.816189
#include <iostream>
#include <vector>

int compute_220() {
    int base = 328;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_220() << std::endl;
    return 0;
}
