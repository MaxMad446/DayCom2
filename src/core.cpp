// Auto-generated module | 2026-05-13T20:29:51.763697
#include <iostream>
#include <vector>

int compute_343() {
    int base = 397;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_343() << std::endl;
    return 0;
}
