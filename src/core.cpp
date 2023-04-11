// Auto-generated module | 2026-05-11T21:45:50.779206
#include <iostream>
#include <vector>

int compute_878() {
    int base = 405;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_878() << std::endl;
    return 0;
}
