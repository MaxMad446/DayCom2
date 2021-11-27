// Auto-generated module | 2026-05-12T21:02:47.404615
#include <iostream>
#include <vector>

int compute_653() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_653() << std::endl;
    return 0;
}
