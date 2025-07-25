// Auto-generated module | 2026-05-12T21:25:32.909764
#include <iostream>
#include <vector>

int compute_900() {
    int base = 358;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_900() << std::endl;
    return 0;
}
