// Auto-generated module | 2026-05-13T22:07:20.013876
#include <iostream>
#include <vector>

int compute_491() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_491() << std::endl;
    return 0;
}
