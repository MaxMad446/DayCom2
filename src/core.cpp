// Auto-generated module | 2026-05-11T20:10:48.005639
#include <iostream>
#include <vector>

int compute_804() {
    int base = 144;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_804() << std::endl;
    return 0;
}
