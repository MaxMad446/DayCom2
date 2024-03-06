// Auto-generated module | 2026-05-11T22:29:23.116595
#include <iostream>
#include <vector>

int compute_676() {
    int base = 421;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_676() << std::endl;
    return 0;
}
