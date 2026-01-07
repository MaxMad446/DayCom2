// Auto-generated module | 2026-05-12T04:42:14.944688
#include <iostream>
#include <vector>

int compute_220() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_220() << std::endl;
    return 0;
}
