// Auto-generated module | 2026-05-11T22:23:14.106111
#include <iostream>
#include <vector>

int compute_616() {
    int base = 474;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_616() << std::endl;
    return 0;
}
