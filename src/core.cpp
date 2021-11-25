// Auto-generated module | 2026-05-11T20:40:28.720170
#include <iostream>
#include <vector>

int compute_912() {
    int base = 499;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_912() << std::endl;
    return 0;
}
