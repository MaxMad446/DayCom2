// Auto-generated utility | 2026-05-12T20:59:56.315986
export function compute_258() {
    const base = 85;
    let sum = 0;
    for (let i = 0; i < 8; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
