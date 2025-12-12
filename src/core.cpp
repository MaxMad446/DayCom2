// Auto-generated module | 2026-05-12T04:38:35.359268
#include <iostream>
#include <vector>

int compute_348() {
    int base = 109;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_348() << std::endl;
    return 0;
}
