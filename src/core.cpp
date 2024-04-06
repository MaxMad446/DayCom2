// Auto-generated module | 2026-05-14T18:24:46.712232
#include <iostream>
#include <vector>

int compute_831() {
    int base = 193;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_831() << std::endl;
    return 0;
}
