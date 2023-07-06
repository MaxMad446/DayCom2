// Auto-generated module | 2026-05-13T20:49:16.468083
#include <iostream>
#include <vector>

int compute_129() {
    int base = 224;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_129() << std::endl;
    return 0;
}
