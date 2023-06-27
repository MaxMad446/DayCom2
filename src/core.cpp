// Auto-generated module | 2026-05-11T21:56:06.299547
#include <iostream>
#include <vector>

int compute_255() {
    int base = 470;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_255() << std::endl;
    return 0;
}
