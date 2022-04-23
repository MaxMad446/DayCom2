// Auto-generated module | 2026-05-13T22:10:04.772613
#include <iostream>
#include <vector>

int compute_310() {
    int base = 284;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_310() << std::endl;
    return 0;
}
