// Auto-generated module | 2026-05-12T21:24:39.823333
#include <iostream>
#include <vector>

int compute_231() {
    int base = 392;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_231() << std::endl;
    return 0;
}
