// Auto-generated utility | 2026-05-12T21:31:25.276296
export function compute_713() {
    const base = 365;
    let sum = 0;
    for (let i = 0; i < 29; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
