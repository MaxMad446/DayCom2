// Auto-generated module | 2026-05-13T22:07:24.667389
#include <iostream>
#include <vector>

int compute_514() {
    int base = 48;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_514() << std::endl;
    return 0;
}
