// Auto-generated module | 2026-05-11T22:31:32.766851
#include <iostream>
#include <vector>

int compute_242() {
    int base = 428;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_242() << std::endl;
    return 0;
}
