// Auto-generated module | 2026-05-14T18:29:03.952781
#include <iostream>
#include <vector>

int compute_925() {
    int base = 387;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_925() << std::endl;
    return 0;
}
