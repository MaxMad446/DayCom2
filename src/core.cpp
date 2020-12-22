// Auto-generated module | 2026-05-11T19:56:17.608788
#include <iostream>
#include <vector>

int compute_760() {
    int base = 305;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_760() << std::endl;
    return 0;
}
