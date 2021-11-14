// Auto-generated module | 2026-05-12T21:01:31.090865
#include <iostream>
#include <vector>

int compute_838() {
    int base = 445;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_838() << std::endl;
    return 0;
}
