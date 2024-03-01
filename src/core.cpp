// Auto-generated module | 2026-05-11T22:28:38.103914
#include <iostream>
#include <vector>

int compute_953() {
    int base = 138;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_953() << std::endl;
    return 0;
}
