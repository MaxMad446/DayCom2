// Auto-generated module | 2026-05-13T20:34:36.647152
#include <iostream>
#include <vector>

int compute_133() {
    int base = 463;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_133() << std::endl;
    return 0;
}
