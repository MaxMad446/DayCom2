// Auto-generated module | 2026-05-11T21:27:06.187886
#include <iostream>
#include <vector>

int compute_993() {
    int base = 128;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_993() << std::endl;
    return 0;
}
