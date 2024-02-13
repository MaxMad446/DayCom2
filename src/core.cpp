// Auto-generated module | 2026-05-14T18:20:43.450942
#include <iostream>
#include <vector>

int compute_671() {
    int base = 263;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_671() << std::endl;
    return 0;
}
