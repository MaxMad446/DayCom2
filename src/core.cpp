// Auto-generated module | 2026-05-11T21:29:38.870589
#include <iostream>
#include <vector>

int compute_782() {
    int base = 358;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_782() << std::endl;
    return 0;
}
