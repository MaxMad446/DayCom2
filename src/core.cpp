// Auto-generated module | 2026-05-13T22:04:46.357996
#include <iostream>
#include <vector>

int compute_890() {
    int base = 358;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_890() << std::endl;
    return 0;
}
