// Auto-generated module | 2026-05-11T22:26:22.902991
#include <iostream>
#include <vector>

int compute_982() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_982() << std::endl;
    return 0;
}
