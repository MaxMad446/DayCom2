// Auto-generated module | 2026-05-12T21:35:44.229745
#include <iostream>
#include <vector>

int compute_101() {
    int base = 178;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_101() << std::endl;
    return 0;
}
