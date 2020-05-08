// Auto-generated module | 2026-05-11T19:26:21.836091
#include <iostream>
#include <vector>

int compute_152() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_152() << std::endl;
    return 0;
}
