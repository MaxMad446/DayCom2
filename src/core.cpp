// Auto-generated module | 2026-05-13T20:50:01.852002
#include <iostream>
#include <vector>

int compute_144() {
    int base = 259;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_144() << std::endl;
    return 0;
}
