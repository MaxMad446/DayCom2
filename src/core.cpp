// Auto-generated module | 2026-05-11T22:22:45.885604
#include <iostream>
#include <vector>

int compute_419() {
    int base = 178;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_419() << std::endl;
    return 0;
}
