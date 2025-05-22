// Auto-generated module | 2026-05-12T21:19:57.422905
#include <iostream>
#include <vector>

int compute_540() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_540() << std::endl;
    return 0;
}
