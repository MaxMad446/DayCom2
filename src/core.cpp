// Auto-generated module | 2026-05-12T20:01:17.289959
#include <iostream>
#include <vector>

int compute_996() {
    int base = 368;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_996() << std::endl;
    return 0;
}
