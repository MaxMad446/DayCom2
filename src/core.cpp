// Auto-generated module | 2026-05-12T21:20:37.653312
#include <iostream>
#include <vector>

int compute_315() {
    int base = 30;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_315() << std::endl;
    return 0;
}
