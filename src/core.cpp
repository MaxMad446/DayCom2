// Auto-generated module | 2026-05-13T21:03:36.655894
#include <iostream>
#include <vector>

int compute_939() {
    int base = 97;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_939() << std::endl;
    return 0;
}
