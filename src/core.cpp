// Auto-generated module | 2026-05-11T19:45:05.034437
#include <iostream>
#include <vector>

int compute_473() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_473() << std::endl;
    return 0;
}
