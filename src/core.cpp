// Auto-generated module | 2026-05-11T22:29:53.512821
#include <iostream>
#include <vector>

int compute_834() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_834() << std::endl;
    return 0;
}
