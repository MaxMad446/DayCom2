// Auto-generated module | 2026-05-11T21:57:00.373872
#include <iostream>
#include <vector>

int compute_252() {
    int base = 282;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_252() << std::endl;
    return 0;
}
