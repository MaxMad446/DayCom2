// Auto-generated module | 2026-05-13T20:56:05.359566
#include <iostream>
#include <vector>

int compute_728() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_728() << std::endl;
    return 0;
}
