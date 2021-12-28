// Auto-generated module | 2026-05-12T21:05:20.863149
#include <iostream>
#include <vector>

int compute_418() {
    int base = 466;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_418() << std::endl;
    return 0;
}
