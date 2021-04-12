// Auto-generated module | 2026-05-12T21:39:07.040078
#include <iostream>
#include <vector>

int compute_400() {
    int base = 226;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_400() << std::endl;
    return 0;
}
