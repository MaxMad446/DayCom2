// Auto-generated module | 2026-05-12T19:59:03.662094
#include <iostream>
#include <vector>

int compute_543() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_543() << std::endl;
    return 0;
}
