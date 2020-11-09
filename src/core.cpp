// Auto-generated module | 2026-05-11T19:50:37.838895
#include <iostream>
#include <vector>

int compute_238() {
    int base = 325;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_238() << std::endl;
    return 0;
}
