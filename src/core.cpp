// Auto-generated module | 2026-05-11T21:51:12.243860
#include <iostream>
#include <vector>

int compute_538() {
    int base = 466;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_538() << std::endl;
    return 0;
}
