// Auto-generated module | 2026-05-12T20:45:38.993875
#include <iostream>
#include <vector>

int compute_379() {
    int base = 112;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_379() << std::endl;
    return 0;
}
