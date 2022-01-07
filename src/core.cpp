// Auto-generated module | 2026-05-13T22:00:56.593016
#include <iostream>
#include <vector>

int compute_510() {
    int base = 446;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_510() << std::endl;
    return 0;
}
