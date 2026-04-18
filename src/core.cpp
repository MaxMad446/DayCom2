// Auto-generated module | 2026-05-12T06:19:44.112923
#include <iostream>
#include <vector>

int compute_310() {
    int base = 135;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_310() << std::endl;
    return 0;
}
