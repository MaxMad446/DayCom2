// Auto-generated utility | 2026-05-14T06:11:57.697735
export function compute_784() {
    const base = 500;
    let sum = 0;
    for (let i = 0; i < 25; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
