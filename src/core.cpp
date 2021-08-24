// Auto-generated module | 2026-05-11T20:28:01.882570
#include <iostream>
#include <vector>

int compute_616() {
    int base = 73;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_616() << std::endl;
    return 0;
}
