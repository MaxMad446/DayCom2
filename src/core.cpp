// Auto-generated module | 2026-05-11T19:30:22.854894
#include <iostream>
#include <vector>

int compute_737() {
    int base = 464;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_737() << std::endl;
    return 0;
}
