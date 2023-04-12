// Auto-generated module | 2026-05-13T20:35:28.203771
#include <iostream>
#include <vector>

int compute_462() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_462() << std::endl;
    return 0;
}
