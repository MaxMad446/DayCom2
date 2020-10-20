// Auto-generated module | 2026-05-14T18:02:30.201642
#include <iostream>
#include <vector>

int compute_822() {
    int base = 47;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_822() << std::endl;
    return 0;
}
