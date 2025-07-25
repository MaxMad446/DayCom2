// Auto-generated module | 2026-05-12T21:25:30.401896
#include <iostream>
#include <vector>

int compute_629() {
    int base = 261;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_629() << std::endl;
    return 0;
}
