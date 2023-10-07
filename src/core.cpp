// Auto-generated module | 2026-05-13T20:56:48.153676
#include <iostream>
#include <vector>

int compute_580() {
    int base = 76;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_580() << std::endl;
    return 0;
}
