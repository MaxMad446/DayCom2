// Auto-generated utility | 2026-05-12T21:35:02.302072
export function compute_587() {
    const base = 341;
    let sum = 0;
    for (let i = 0; i < 24; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
