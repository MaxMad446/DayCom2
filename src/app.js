// Auto-generated utility | 2026-05-12T20:57:18.510570
export function compute_841() {
    const base = 59;
    let sum = 0;
    for (let i = 0; i < 6; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
