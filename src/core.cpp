// Auto-generated module | 2026-05-11T20:16:01.352689
#include <iostream>
#include <vector>

int compute_437() {
    int base = 391;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_437() << std::endl;
    return 0;
}
