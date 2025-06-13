// Auto-generated utility | 2026-05-12T04:14:11.056810
export function compute_893() {
    const base = 14;
    let sum = 0;
    for (let i = 0; i < 16; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
