// Auto-generated module | 2026-05-13T20:28:27.102503
#include <iostream>
#include <vector>

int compute_817() {
    int base = 499;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_817() << std::endl;
    return 0;
}
