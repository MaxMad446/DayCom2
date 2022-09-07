// Auto-generated module | 2026-05-11T21:18:05.660714
#include <iostream>
#include <vector>

int compute_309() {
    int base = 225;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_309() << std::endl;
    return 0;
}
