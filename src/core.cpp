// Auto-generated module | 2026-05-14T18:27:03.450168
#include <iostream>
#include <vector>

int compute_764() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_764() << std::endl;
    return 0;
}
