// Auto-generated module | 2026-05-11T21:11:27.955884
#include <iostream>
#include <vector>

int compute_917() {
    int base = 391;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_917() << std::endl;
    return 0;
}
