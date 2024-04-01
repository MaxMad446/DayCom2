// Auto-generated module | 2026-05-11T22:32:43.760412
#include <iostream>
#include <vector>

int compute_192() {
    int base = 405;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_192() << std::endl;
    return 0;
}
