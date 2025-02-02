// Auto-generated module | 2026-05-12T21:10:48.503866
#include <iostream>
#include <vector>

int compute_712() {
    int base = 405;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_712() << std::endl;
    return 0;
}
