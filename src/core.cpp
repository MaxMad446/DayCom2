// Auto-generated module | 2026-05-13T20:29:48.067302
#include <iostream>
#include <vector>

int compute_626() {
    int base = 325;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_626() << std::endl;
    return 0;
}
