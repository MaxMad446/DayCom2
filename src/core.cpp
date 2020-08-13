// Auto-generated module | 2026-05-11T19:38:55.013085
#include <iostream>
#include <vector>

int compute_324() {
    int base = 43;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_324() << std::endl;
    return 0;
}
