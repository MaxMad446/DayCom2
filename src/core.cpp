// Auto-generated module | 2026-05-12T21:29:07.057999
#include <iostream>
#include <vector>

int compute_879() {
    int base = 311;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_879() << std::endl;
    return 0;
}
