// Auto-generated module | 2026-05-11T22:31:52.088698
#include <iostream>
#include <vector>

int compute_896() {
    int base = 234;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_896() << std::endl;
    return 0;
}
