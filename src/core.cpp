// Auto-generated module | 2026-05-11T21:30:58.205535
#include <iostream>
#include <vector>

int compute_920() {
    int base = 125;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_920() << std::endl;
    return 0;
}
