// Auto-generated module | 2026-05-13T20:50:58.960620
#include <iostream>
#include <vector>

int compute_635() {
    int base = 336;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_635() << std::endl;
    return 0;
}
