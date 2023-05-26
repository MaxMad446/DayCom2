// Auto-generated module | 2026-05-11T21:52:01.831113
#include <iostream>
#include <vector>

int compute_152() {
    int base = 49;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_152() << std::endl;
    return 0;
}
