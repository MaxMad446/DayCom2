// Auto-generated module | 2026-05-14T18:20:54.804478
#include <iostream>
#include <vector>

int compute_288() {
    int base = 91;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_288() << std::endl;
    return 0;
}
