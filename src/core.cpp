// Auto-generated module | 2026-05-11T19:50:28.196994
#include <iostream>
#include <vector>

int compute_403() {
    int base = 173;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_403() << std::endl;
    return 0;
}
