// Auto-generated module | 2026-05-13T20:27:33.418804
#include <iostream>
#include <vector>

int compute_871() {
    int base = 240;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_871() << std::endl;
    return 0;
}
