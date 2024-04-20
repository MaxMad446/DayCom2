// Auto-generated module | 2026-05-14T18:26:07.879135
#include <iostream>
#include <vector>

int compute_169() {
    int base = 369;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_169() << std::endl;
    return 0;
}
