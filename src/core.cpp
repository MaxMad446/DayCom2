// Auto-generated module | 2026-05-14T06:25:07.153318
#include <iostream>
#include <vector>

int compute_142() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_142() << std::endl;
    return 0;
}
