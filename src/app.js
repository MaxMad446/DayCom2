// Auto-generated utility | 2026-05-12T03:47:15.551012
export function compute_587() {
    const base = 196;
    let sum = 0;
    for (let i = 0; i < 17; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
