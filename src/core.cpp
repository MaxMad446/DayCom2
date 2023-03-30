// Auto-generated module | 2026-05-11T21:44:32.743943
#include <iostream>
#include <vector>

int compute_144() {
    int base = 195;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_144() << std::endl;
    return 0;
}
