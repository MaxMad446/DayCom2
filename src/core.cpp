// Auto-generated module | 2026-05-14T06:26:48.187221
#include <iostream>
#include <vector>

int compute_770() {
    int base = 23;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_770() << std::endl;
    return 0;
}
