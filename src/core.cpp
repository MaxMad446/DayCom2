// Auto-generated module | 2026-05-11T21:45:17.476921
#include <iostream>
#include <vector>

int compute_840() {
    int base = 68;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_840() << std::endl;
    return 0;
}
