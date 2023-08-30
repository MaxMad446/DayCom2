// Auto-generated module | 2026-05-13T20:53:34.714765
#include <iostream>
#include <vector>

int compute_742() {
    int base = 109;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_742() << std::endl;
    return 0;
}
