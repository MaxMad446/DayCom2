// Auto-generated module | 2026-05-13T20:54:22.906254
#include <iostream>
#include <vector>

int compute_622() {
    int base = 200;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_622() << std::endl;
    return 0;
}
