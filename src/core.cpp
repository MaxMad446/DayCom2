// Auto-generated module | 2026-05-13T20:54:18.380006
#include <iostream>
#include <vector>

int compute_918() {
    int base = 58;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_918() << std::endl;
    return 0;
}
