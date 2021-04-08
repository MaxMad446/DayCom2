// Auto-generated module | 2026-05-12T21:38:46.022518
#include <iostream>
#include <vector>

int compute_527() {
    int base = 246;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_527() << std::endl;
    return 0;
}
