// Auto-generated module | 2026-05-14T18:25:01.001086
#include <iostream>
#include <vector>

int compute_574() {
    int base = 413;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_574() << std::endl;
    return 0;
}
