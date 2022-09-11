// Auto-generated module | 2026-05-11T21:18:34.897342
#include <iostream>
#include <vector>

int compute_838() {
    int base = 17;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_838() << std::endl;
    return 0;
}
