// Auto-generated module | 2026-05-12T21:17:04.309371
#include <iostream>
#include <vector>

int compute_310() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_310() << std::endl;
    return 0;
}
