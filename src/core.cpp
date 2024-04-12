// Auto-generated module | 2026-05-11T22:34:08.904050
#include <iostream>
#include <vector>

int compute_437() {
    int base = 104;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_437() << std::endl;
    return 0;
}
