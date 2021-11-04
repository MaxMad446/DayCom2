// Auto-generated utility | 2026-05-12T21:00:46.512712
export function compute_641() {
    const base = 130;
    let sum = 0;
    for (let i = 0; i < 17; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
