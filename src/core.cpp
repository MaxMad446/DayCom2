// Auto-generated module | 2026-05-13T20:34:45.162536
#include <iostream>
#include <vector>

int compute_729() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_729() << std::endl;
    return 0;
}
