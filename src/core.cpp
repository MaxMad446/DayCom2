// Auto-generated module | 2026-05-11T21:48:50.103441
#include <iostream>
#include <vector>

int compute_976() {
    int base = 91;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_976() << std::endl;
    return 0;
}
