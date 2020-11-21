// Auto-generated module | 2026-05-11T19:52:17.094682
#include <iostream>
#include <vector>

int compute_116() {
    int base = 437;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_116() << std::endl;
    return 0;
}
