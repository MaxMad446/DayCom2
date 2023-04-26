// Auto-generated module | 2026-05-13T20:36:37.095736
#include <iostream>
#include <vector>

int compute_950() {
    int base = 261;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_950() << std::endl;
    return 0;
}
