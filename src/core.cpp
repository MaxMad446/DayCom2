// Auto-generated module | 2026-05-13T20:27:32.169226
#include <iostream>
#include <vector>

int compute_116() {
    int base = 39;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_116() << std::endl;
    return 0;
}
