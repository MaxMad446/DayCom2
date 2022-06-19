// Auto-generated module | 2026-05-14T06:12:45.857911
#include <iostream>
#include <vector>

int compute_460() {
    int base = 135;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_460() << std::endl;
    return 0;
}
