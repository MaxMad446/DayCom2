// Auto-generated utility | 2026-05-12T04:49:44.695700
export function compute_986() {
    const base = 11;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
