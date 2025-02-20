// Auto-generated module | 2026-05-12T21:12:25.127291
#include <iostream>
#include <vector>

int compute_383() {
    int base = 128;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_383() << std::endl;
    return 0;
}
