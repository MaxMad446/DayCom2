// Auto-generated module | 2026-05-13T21:00:02.346419
#include <iostream>
#include <vector>

int compute_167() {
    int base = 236;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_167() << std::endl;
    return 0;
}
