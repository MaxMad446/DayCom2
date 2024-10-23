// Auto-generated module | 2026-05-12T03:43:47.440933
#include <iostream>
#include <vector>

int compute_283() {
    int base = 226;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_283() << std::endl;
    return 0;
}
