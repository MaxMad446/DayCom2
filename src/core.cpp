// Auto-generated module | 2026-05-11T22:35:04.392289
#include <iostream>
#include <vector>

int compute_353() {
    int base = 172;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_353() << std::endl;
    return 0;
}
