// Auto-generated module | 2026-05-13T20:38:34.073637
#include <iostream>
#include <vector>

int compute_343() {
    int base = 246;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_343() << std::endl;
    return 0;
}
