// Auto-generated module | 2026-05-12T21:27:44.046449
#include <iostream>
#include <vector>

int compute_450() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_450() << std::endl;
    return 0;
}
