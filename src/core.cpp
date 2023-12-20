// Auto-generated module | 2026-05-13T21:03:01.127246
#include <iostream>
#include <vector>

int compute_652() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_652() << std::endl;
    return 0;
}
