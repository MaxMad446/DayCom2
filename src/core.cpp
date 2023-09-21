// Auto-generated module | 2026-05-13T20:55:29.110851
#include <iostream>
#include <vector>

int compute_365() {
    int base = 450;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_365() << std::endl;
    return 0;
}
