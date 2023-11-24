// Auto-generated module | 2026-05-11T22:15:42.750218
#include <iostream>
#include <vector>

int compute_209() {
    int base = 112;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_209() << std::endl;
    return 0;
}
