// Auto-generated module | 2026-05-11T20:10:08.755690
#include <iostream>
#include <vector>

int compute_148() {
    int base = 263;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_148() << std::endl;
    return 0;
}
