// Auto-generated module | 2026-05-11T19:48:10.469785
#include <iostream>
#include <vector>

int compute_249() {
    int base = 455;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_249() << std::endl;
    return 0;
}
