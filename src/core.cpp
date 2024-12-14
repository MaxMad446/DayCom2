// Auto-generated module | 2026-05-12T03:50:38.296867
#include <iostream>
#include <vector>

int compute_258() {
    int base = 163;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_258() << std::endl;
    return 0;
}
