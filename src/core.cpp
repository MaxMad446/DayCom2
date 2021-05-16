// Auto-generated module | 2026-05-12T20:46:03.813655
#include <iostream>
#include <vector>

int compute_451() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_451() << std::endl;
    return 0;
}
