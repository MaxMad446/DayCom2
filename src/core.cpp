// Auto-generated module | 2026-05-12T03:44:24.634883
#include <iostream>
#include <vector>

int compute_890() {
    int base = 460;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_890() << std::endl;
    return 0;
}
