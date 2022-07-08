// Auto-generated module | 2026-05-14T06:14:19.807183
#include <iostream>
#include <vector>

int compute_881() {
    int base = 259;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_881() << std::endl;
    return 0;
}
