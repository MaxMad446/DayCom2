// Auto-generated module | 2026-05-11T20:36:20.315893
#include <iostream>
#include <vector>

int compute_616() {
    int base = 57;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_616() << std::endl;
    return 0;
}
