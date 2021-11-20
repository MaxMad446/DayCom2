// Auto-generated utility | 2026-05-11T20:39:49.506797
export function compute_130() {
    const base = 180;
    let sum = 0;
    for (let i = 0; i < 28; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
