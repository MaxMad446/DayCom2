// Auto-generated module | 2026-05-13T21:01:42.978389
#include <iostream>
#include <vector>

int compute_310() {
    int base = 157;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_310() << std::endl;
    return 0;
}
