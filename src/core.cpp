// Auto-generated module | 2026-05-11T21:52:35.042042
#include <iostream>
#include <vector>

int compute_194() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_194() << std::endl;
    return 0;
}
