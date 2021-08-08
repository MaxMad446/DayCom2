// Auto-generated module | 2026-05-12T20:53:05.515651
#include <iostream>
#include <vector>

int compute_868() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_868() << std::endl;
    return 0;
}
