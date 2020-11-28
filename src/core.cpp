// Auto-generated module | 2026-05-12T20:00:38.422171
#include <iostream>
#include <vector>

int compute_972() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_972() << std::endl;
    return 0;
}
