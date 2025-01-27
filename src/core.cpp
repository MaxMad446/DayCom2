// Auto-generated module | 2026-05-12T21:10:20.079294
#include <iostream>
#include <vector>

int compute_712() {
    int base = 374;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_712() << std::endl;
    return 0;
}
