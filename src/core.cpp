// Auto-generated module | 2026-05-14T06:23:07.974109
#include <iostream>
#include <vector>

int compute_755() {
    int base = 123;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_755() << std::endl;
    return 0;
}
