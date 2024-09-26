// Auto-generated module | 2026-05-12T03:40:13.407847
#include <iostream>
#include <vector>

int compute_540() {
    int base = 135;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_540() << std::endl;
    return 0;
}
