// Auto-generated module | 2026-05-11T21:36:18.997792
#include <iostream>
#include <vector>

int compute_190() {
    int base = 323;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_190() << std::endl;
    return 0;
}
