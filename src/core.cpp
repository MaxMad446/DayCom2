// Auto-generated module | 2026-05-12T03:53:42.879407
#include <iostream>
#include <vector>

int compute_359() {
    int base = 377;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_359() << std::endl;
    return 0;
}
