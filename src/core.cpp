// Auto-generated module | 2026-05-11T19:52:04.143350
#include <iostream>
#include <vector>

int compute_809() {
    int base = 168;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_809() << std::endl;
    return 0;
}
