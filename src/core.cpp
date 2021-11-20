// Auto-generated module | 2026-05-12T21:02:07.029640
#include <iostream>
#include <vector>

int compute_355() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_355() << std::endl;
    return 0;
}
