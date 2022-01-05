// Auto-generated module | 2026-05-11T20:45:46.461868
#include <iostream>
#include <vector>

int compute_137() {
    int base = 318;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_137() << std::endl;
    return 0;
}
