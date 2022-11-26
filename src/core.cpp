// Auto-generated module | 2026-05-14T06:25:43.774977
#include <iostream>
#include <vector>

int compute_460() {
    int base = 97;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_460() << std::endl;
    return 0;
}
