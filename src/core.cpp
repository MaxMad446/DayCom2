// Auto-generated module | 2026-05-13T20:56:39.766106
#include <iostream>
#include <vector>

int compute_665() {
    int base = 408;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_665() << std::endl;
    return 0;
}
