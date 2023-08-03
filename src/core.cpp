// Auto-generated module | 2026-05-11T22:00:55.590216
#include <iostream>
#include <vector>

int compute_319() {
    int base = 374;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_319() << std::endl;
    return 0;
}
