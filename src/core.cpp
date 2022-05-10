// Auto-generated module | 2026-05-11T21:02:06.341803
#include <iostream>
#include <vector>

int compute_460() {
    int base = 167;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_460() << std::endl;
    return 0;
}
