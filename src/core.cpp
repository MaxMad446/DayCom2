// Auto-generated module | 2026-05-11T22:02:43.878681
#include <iostream>
#include <vector>

int compute_450() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_450() << std::endl;
    return 0;
}
