// Auto-generated module | 2026-05-11T22:12:51.820825
#include <iostream>
#include <vector>

int compute_608() {
    int base = 135;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_608() << std::endl;
    return 0;
}
