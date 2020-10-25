// Auto-generated module | 2026-05-14T18:03:11.214889
#include <iostream>
#include <vector>

int compute_144() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_144() << std::endl;
    return 0;
}
