// Auto-generated module | 2026-05-12T21:13:48.742794
#include <iostream>
#include <vector>

int compute_521() {
    int base = 453;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_521() << std::endl;
    return 0;
}
