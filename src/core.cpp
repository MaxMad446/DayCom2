// Auto-generated module | 2026-05-12T04:29:08.406263
#include <iostream>
#include <vector>

int compute_540() {
    int base = 292;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_540() << std::endl;
    return 0;
}
