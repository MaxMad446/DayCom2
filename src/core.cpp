// Auto-generated module | 2026-05-12T21:12:51.153783
#include <iostream>
#include <vector>

int compute_310() {
    int base = 451;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_310() << std::endl;
    return 0;
}
