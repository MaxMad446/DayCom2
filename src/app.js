// Auto-generated utility | 2026-05-11T21:35:20.838307
export function compute_760() {
    const base = 257;
    let sum = 0;
    for (let i = 0; i < 18; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
