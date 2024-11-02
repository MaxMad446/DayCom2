// Auto-generated module | 2026-05-12T03:45:05.062917
#include <iostream>
#include <vector>

int compute_349() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_349() << std::endl;
    return 0;
}
