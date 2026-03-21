// Auto-generated module | 2026-05-12T06:15:56.811783
#include <iostream>
#include <vector>

int compute_755() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_755() << std::endl;
    return 0;
}
