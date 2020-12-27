// Auto-generated module | 2026-05-11T19:56:54.069103
#include <iostream>
#include <vector>

int compute_632() {
    int base = 303;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_632() << std::endl;
    return 0;
}
