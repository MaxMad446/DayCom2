// Auto-generated module | 2026-05-11T20:30:06.945400
#include <iostream>
#include <vector>

int compute_924() {
    int base = 105;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_924() << std::endl;
    return 0;
}
