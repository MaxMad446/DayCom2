// Auto-generated module | 2026-05-11T20:58:44.752030
#include <iostream>
#include <vector>

int compute_757() {
    int base = 38;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_757() << std::endl;
    return 0;
}
