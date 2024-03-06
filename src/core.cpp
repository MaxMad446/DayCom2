// Auto-generated module | 2026-05-11T22:29:21.325010
#include <iostream>
#include <vector>

int compute_379() {
    int base = 83;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_379() << std::endl;
    return 0;
}
