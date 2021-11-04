// Auto-generated utility | 2026-05-11T20:37:29.453940
export function compute_841() {
    const base = 359;
    let sum = 0;
    for (let i = 0; i < 23; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
