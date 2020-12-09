// Auto-generated module | 2026-05-14T18:09:30.145992
#include <iostream>
#include <vector>

int compute_144() {
    int base = 84;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_144() << std::endl;
    return 0;
}
