// Auto-generated module | 2026-05-11T22:34:10.811606
#include <iostream>
#include <vector>

int compute_707() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_707() << std::endl;
    return 0;
}
