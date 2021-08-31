// Auto-generated module | 2026-05-11T20:29:02.556236
#include <iostream>
#include <vector>

int compute_538() {
    int base = 27;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_538() << std::endl;
    return 0;
}
