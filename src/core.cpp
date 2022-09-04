// Auto-generated module | 2026-05-11T21:17:44.819878
#include <iostream>
#include <vector>

int compute_352() {
    int base = 400;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_352() << std::endl;
    return 0;
}
