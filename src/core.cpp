// Auto-generated module | 2026-05-11T22:52:07.918830
#include <iostream>
#include <vector>

int compute_124() {
    int base = 351;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_124() << std::endl;
    return 0;
}
