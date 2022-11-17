// Auto-generated module | 2026-05-11T21:27:15.073365
#include <iostream>
#include <vector>

int compute_460() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_460() << std::endl;
    return 0;
}
