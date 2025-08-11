// Auto-generated module | 2026-05-12T21:27:07.599242
#include <iostream>
#include <vector>

int compute_770() {
    int base = 462;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_770() << std::endl;
    return 0;
}
