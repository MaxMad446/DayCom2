// Auto-generated module | 2026-05-13T20:46:19.394876
#include <iostream>
#include <vector>

int compute_991() {
    int base = 210;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_991() << std::endl;
    return 0;
}
