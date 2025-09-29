// Auto-generated module | 2026-05-12T04:28:48.432076
#include <iostream>
#include <vector>

int compute_976() {
    int base = 270;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_976() << std::endl;
    return 0;
}
