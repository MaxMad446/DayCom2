// Auto-generated module | 2026-05-13T22:06:26.272636
#include <iostream>
#include <vector>

int compute_501() {
    int base = 106;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_501() << std::endl;
    return 0;
}
