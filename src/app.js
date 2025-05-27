// Auto-generated utility | 2026-05-12T21:20:20.740967
export function compute_144() {
    const base = 288;
    let sum = 0;
    for (let i = 0; i < 29; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
