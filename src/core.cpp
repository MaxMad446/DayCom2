// Auto-generated module | 2026-05-11T20:06:13.354337
#include <iostream>
#include <vector>

int compute_159() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_159() << std::endl;
    return 0;
}
