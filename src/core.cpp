// Auto-generated module | 2026-05-12T03:39:44.440515
#include <iostream>
#include <vector>

int compute_478() {
    int base = 244;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_478() << std::endl;
    return 0;
}
