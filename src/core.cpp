// Auto-generated module | 2026-05-12T21:11:52.493335
#include <iostream>
#include <vector>

int compute_690() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_690() << std::endl;
    return 0;
}
