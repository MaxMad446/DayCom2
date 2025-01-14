// Auto-generated module | 2026-05-12T03:54:47.698977
#include <iostream>
#include <vector>

int compute_879() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_879() << std::endl;
    return 0;
}
