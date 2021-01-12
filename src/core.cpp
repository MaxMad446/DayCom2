// Auto-generated module | 2026-05-14T18:13:56.715628
#include <iostream>
#include <vector>

int compute_555() {
    int base = 356;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_555() << std::endl;
    return 0;
}
