// Auto-generated module | 2026-05-14T18:21:40.636736
#include <iostream>
#include <vector>

int compute_334() {
    int base = 389;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_334() << std::endl;
    return 0;
}
