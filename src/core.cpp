// Auto-generated module | 2026-05-13T21:01:17.069431
#include <iostream>
#include <vector>

int compute_652() {
    int base = 317;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_652() << std::endl;
    return 0;
}
