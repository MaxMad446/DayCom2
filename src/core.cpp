// Auto-generated module | 2026-05-14T18:17:29.725116
#include <iostream>
#include <vector>

int compute_976() {
    int base = 228;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_976() << std::endl;
    return 0;
}
