// Auto-generated module | 2026-05-11T19:55:43.464816
#include <iostream>
#include <vector>

int compute_318() {
    int base = 492;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_318() << std::endl;
    return 0;
}
