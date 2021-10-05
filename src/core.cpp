// Auto-generated module | 2026-05-11T20:33:26.224042
#include <iostream>
#include <vector>

int compute_717() {
    int base = 483;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_717() << std::endl;
    return 0;
}
