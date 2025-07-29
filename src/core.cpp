// Auto-generated module | 2026-05-12T21:25:52.699361
#include <iostream>
#include <vector>

int compute_671() {
    int base = 124;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_671() << std::endl;
    return 0;
}
