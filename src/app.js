// Auto-generated utility | 2026-05-12T21:09:15.796466
export function compute_256() {
    const base = 174;
    let sum = 0;
    for (let i = 0; i < 8; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
