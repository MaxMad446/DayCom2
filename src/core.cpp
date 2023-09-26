// Auto-generated module | 2026-05-13T20:55:54.754883
#include <iostream>
#include <vector>

int compute_318() {
    int base = 181;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_318() << std::endl;
    return 0;
}
