// Auto-generated module | 2026-05-11T20:53:16.573920
#include <iostream>
#include <vector>

int compute_993() {
    int base = 169;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_993() << std::endl;
    return 0;
}
