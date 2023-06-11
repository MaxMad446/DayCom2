// Auto-generated module | 2026-05-13T20:47:11.899676
#include <iostream>
#include <vector>

int compute_727() {
    int base = 356;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_727() << std::endl;
    return 0;
}
