// Auto-generated module | 2026-05-13T20:48:12.903715
#include <iostream>
#include <vector>

int compute_353() {
    int base = 260;
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
