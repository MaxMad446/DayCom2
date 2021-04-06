// Auto-generated module | 2026-05-12T20:42:46.391842
#include <iostream>
#include <vector>

int compute_554() {
    int base = 71;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_554() << std::endl;
    return 0;
}
