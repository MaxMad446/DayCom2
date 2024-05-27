// Auto-generated module | 2026-05-14T18:28:56.962164
#include <iostream>
#include <vector>

int compute_547() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_547() << std::endl;
    return 0;
}
