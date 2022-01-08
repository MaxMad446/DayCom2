// Auto-generated module | 2026-05-13T22:01:07.205189
#include <iostream>
#include <vector>

int compute_761() {
    int base = 282;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_761() << std::endl;
    return 0;
}
