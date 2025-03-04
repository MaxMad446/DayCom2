// Auto-generated module | 2026-05-12T21:13:22.366337
#include <iostream>
#include <vector>

int compute_550() {
    int base = 137;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_550() << std::endl;
    return 0;
}
