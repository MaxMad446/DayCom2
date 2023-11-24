// Auto-generated module | 2026-05-11T22:15:45.485145
#include <iostream>
#include <vector>

int compute_320() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_320() << std::endl;
    return 0;
}
