// Auto-generated module | 2026-05-12T21:02:04.422590
#include <iostream>
#include <vector>

int compute_343() {
    int base = 399;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_343() << std::endl;
    return 0;
}
