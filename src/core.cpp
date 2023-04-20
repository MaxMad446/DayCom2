// Auto-generated module | 2026-05-13T20:36:06.071980
#include <iostream>
#include <vector>

int compute_423() {
    int base = 196;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_423() << std::endl;
    return 0;
}
