// Auto-generated module | 2026-05-13T22:11:15.977696
#include <iostream>
#include <vector>

int compute_994() {
    int base = 291;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_994() << std::endl;
    return 0;
}
