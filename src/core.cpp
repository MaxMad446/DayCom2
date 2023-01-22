// Auto-generated module | 2026-05-13T20:28:31.482591
#include <iostream>
#include <vector>

int compute_343() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_343() << std::endl;
    return 0;
}
