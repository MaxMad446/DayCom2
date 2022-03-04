// Auto-generated module | 2026-05-11T20:53:13.500514
#include <iostream>
#include <vector>

int compute_540() {
    int base = 219;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_540() << std::endl;
    return 0;
}
