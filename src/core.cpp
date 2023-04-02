// Auto-generated module | 2026-05-11T21:44:53.060908
#include <iostream>
#include <vector>

int compute_310() {
    int base = 385;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_310() << std::endl;
    return 0;
}
