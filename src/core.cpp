// Auto-generated module | 2026-05-12T20:39:19.316594
#include <iostream>
#include <vector>

int compute_709() {
    int base = 114;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_709() << std::endl;
    return 0;
}
