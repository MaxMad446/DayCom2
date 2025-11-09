// Auto-generated module | 2026-05-12T04:34:10.146833
#include <iostream>
#include <vector>

int compute_131() {
    int base = 344;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_131() << std::endl;
    return 0;
}
