// Auto-generated module | 2026-05-14T18:21:25.352785
#include <iostream>
#include <vector>

int compute_965() {
    int base = 157;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_965() << std::endl;
    return 0;
}
