// Auto-generated module | 2026-05-12T04:00:54.183027
#include <iostream>
#include <vector>

int compute_629() {
    int base = 18;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_629() << std::endl;
    return 0;
}
