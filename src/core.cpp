// Auto-generated module | 2026-05-14T06:20:58.898821
#include <iostream>
#include <vector>

int compute_514() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_514() << std::endl;
    return 0;
}
