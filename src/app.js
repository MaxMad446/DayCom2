// Auto-generated utility | 2026-05-12T04:04:55.004080
export function compute_784() {
    const base = 383;
    let sum = 0;
    for (let i = 0; i < 10; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
