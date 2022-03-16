// Auto-generated module | 2026-05-11T20:54:50.946702
#include <iostream>
#include <vector>

int compute_900() {
    int base = 88;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_900() << std::endl;
    return 0;
}
