// Auto-generated module | 2026-05-11T19:59:32.595174
#include <iostream>
#include <vector>

int compute_752() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_752() << std::endl;
    return 0;
}
