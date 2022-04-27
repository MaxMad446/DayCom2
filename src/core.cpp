// Auto-generated module | 2026-05-11T21:00:23.750768
#include <iostream>
#include <vector>

int compute_616() {
    int base = 390;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_616() << std::endl;
    return 0;
}
