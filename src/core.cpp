// Auto-generated module | 2026-05-13T20:27:44.562168
#include <iostream>
#include <vector>

int compute_938() {
    int base = 363;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_938() << std::endl;
    return 0;
}
