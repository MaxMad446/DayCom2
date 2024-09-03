// Auto-generated module | 2026-05-11T22:52:39.277036
#include <iostream>
#include <vector>

int compute_206() {
    int base = 71;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_206() << std::endl;
    return 0;
}
