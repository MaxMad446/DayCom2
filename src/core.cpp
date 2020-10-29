// Auto-generated module | 2026-05-14T18:03:43.971653
#include <iostream>
#include <vector>

int compute_179() {
    int base = 474;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_179() << std::endl;
    return 0;
}
