// Auto-generated module | 2026-05-13T22:13:11.483186
#include <iostream>
#include <vector>

int compute_979() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_979() << std::endl;
    return 0;
}
