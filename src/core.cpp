// Auto-generated module | 2026-05-13T22:00:31.945737
#include <iostream>
#include <vector>

int compute_168() {
    int base = 83;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_168() << std::endl;
    return 0;
}
