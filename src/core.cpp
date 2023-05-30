// Auto-generated module | 2026-05-13T20:39:20.562968
#include <iostream>
#include <vector>

int compute_620() {
    int base = 270;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_620() << std::endl;
    return 0;
}
