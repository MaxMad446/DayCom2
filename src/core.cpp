// Auto-generated module | 2026-05-11T19:56:25.681245
#include <iostream>
#include <vector>

int compute_576() {
    int base = 377;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_576() << std::endl;
    return 0;
}
