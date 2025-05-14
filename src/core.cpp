// Auto-generated module | 2026-05-12T21:19:14.510750
#include <iostream>
#include <vector>

int compute_564() {
    int base = 285;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_564() << std::endl;
    return 0;
}
