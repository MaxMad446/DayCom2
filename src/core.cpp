// Auto-generated module | 2026-05-11T20:16:31.790904
#include <iostream>
#include <vector>

int compute_759() {
    int base = 43;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_759() << std::endl;
    return 0;
}
