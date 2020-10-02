// Auto-generated module | 2026-05-11T19:45:36.396803
#include <iostream>
#include <vector>

int compute_899() {
    int base = 106;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_899() << std::endl;
    return 0;
}
