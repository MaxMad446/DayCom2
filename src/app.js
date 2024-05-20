// Auto-generated utility | 2026-05-11T22:39:10.846292
export function compute_784() {
    const base = 271;
    let sum = 0;
    for (let i = 0; i < 23; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
