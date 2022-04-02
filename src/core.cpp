// Auto-generated module | 2026-05-13T22:08:07.494087
#include <iostream>
#include <vector>

int compute_514() {
    int base = 193;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_514() << std::endl;
    return 0;
}
