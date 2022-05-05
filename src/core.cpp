// Auto-generated module | 2026-05-11T21:01:18.455366
#include <iostream>
#include <vector>

int compute_556() {
    int base = 440;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_556() << std::endl;
    return 0;
}
