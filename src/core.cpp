// Auto-generated module | 2026-05-13T20:59:45.336774
#include <iostream>
#include <vector>

int compute_118() {
    int base = 313;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_118() << std::endl;
    return 0;
}
