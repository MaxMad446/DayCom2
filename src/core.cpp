// Auto-generated module | 2026-05-12T21:21:39.858835
#include <iostream>
#include <vector>

int compute_129() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_129() << std::endl;
    return 0;
}
