// Auto-generated module | 2026-05-13T20:58:21.608698
#include <iostream>
#include <vector>

int compute_382() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_382() << std::endl;
    return 0;
}
