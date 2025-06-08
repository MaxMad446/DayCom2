// Auto-generated module | 2026-05-12T21:21:21.582874
#include <iostream>
#include <vector>

int compute_232() {
    int base = 107;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_232() << std::endl;
    return 0;
}
