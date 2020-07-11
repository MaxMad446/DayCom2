// Auto-generated module | 2026-05-11T19:34:35.751609
#include <iostream>
#include <vector>

int compute_674() {
    int base = 446;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_674() << std::endl;
    return 0;
}
