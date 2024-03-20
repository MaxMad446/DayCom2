// Auto-generated module | 2026-05-11T22:31:08.295479
#include <iostream>
#include <vector>

int compute_309() {
    int base = 453;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_309() << std::endl;
    return 0;
}
