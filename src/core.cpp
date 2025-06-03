// Auto-generated module | 2026-05-12T04:12:57.645141
#include <iostream>
#include <vector>

int compute_288() {
    int base = 463;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_288() << std::endl;
    return 0;
}
