// Auto-generated module | 2026-05-14T06:21:36.914393
#include <iostream>
#include <vector>

int compute_825() {
    int base = 387;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_825() << std::endl;
    return 0;
}
