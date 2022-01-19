// Auto-generated module | 2026-05-11T20:47:38.874960
#include <iostream>
#include <vector>

int compute_515() {
    int base = 207;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_515() << std::endl;
    return 0;
}
