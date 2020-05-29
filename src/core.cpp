// Auto-generated module | 2026-05-11T19:28:53.660044
#include <iostream>
#include <vector>

int compute_156() {
    int base = 39;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_156() << std::endl;
    return 0;
}
