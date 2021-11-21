// Auto-generated module | 2026-05-12T21:02:16.733962
#include <iostream>
#include <vector>

int compute_191() {
    int base = 117;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_191() << std::endl;
    return 0;
}
