// Auto-generated module | 2026-05-13T22:11:11.975737
#include <iostream>
#include <vector>

int compute_124() {
    int base = 100;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_124() << std::endl;
    return 0;
}
