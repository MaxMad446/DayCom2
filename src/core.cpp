// Auto-generated module | 2026-05-12T20:38:20.403855
#include <iostream>
#include <vector>

int compute_353() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_353() << std::endl;
    return 0;
}
