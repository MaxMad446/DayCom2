// Auto-generated module | 2026-05-11T20:52:27.445009
#include <iostream>
#include <vector>

int compute_641() {
    int base = 22;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_641() << std::endl;
    return 0;
}
