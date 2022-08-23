// Auto-generated module | 2026-05-14T06:17:57.158033
#include <iostream>
#include <vector>

int compute_353() {
    int base = 307;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_353() << std::endl;
    return 0;
}
