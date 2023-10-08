// Auto-generated module | 2026-05-13T20:56:55.713845
#include <iostream>
#include <vector>

int compute_911() {
    int base = 384;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_911() << std::endl;
    return 0;
}
