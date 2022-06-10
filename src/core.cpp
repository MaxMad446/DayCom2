// Auto-generated module | 2026-05-14T06:11:59.352449
#include <iostream>
#include <vector>

int compute_616() {
    int base = 71;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_616() << std::endl;
    return 0;
}
