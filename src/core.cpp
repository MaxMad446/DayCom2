// Auto-generated module | 2026-05-12T20:46:58.816337
#include <iostream>
#include <vector>

int compute_144() {
    int base = 54;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_144() << std::endl;
    return 0;
}
