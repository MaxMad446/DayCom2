// Auto-generated utility | 2026-05-12T06:18:17.552019
export function compute_397() {
    const base = 180;
    let sum = 0;
    for (let i = 0; i < 12; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
