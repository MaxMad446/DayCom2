// Auto-generated module | 2026-05-12T20:01:07.328768
#include <iostream>
#include <vector>

int compute_419() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_419() << std::endl;
    return 0;
}
