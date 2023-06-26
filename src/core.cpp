// Auto-generated module | 2026-05-13T20:48:20.693028
#include <iostream>
#include <vector>

int compute_144() {
    int base = 154;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_144() << std::endl;
    return 0;
}
