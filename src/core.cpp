// Auto-generated module | 2026-05-11T20:02:03.455183
#include <iostream>
#include <vector>

int compute_755() {
    int base = 22;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_755() << std::endl;
    return 0;
}
