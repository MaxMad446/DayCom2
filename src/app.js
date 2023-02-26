// Auto-generated utility | 2026-05-13T20:31:39.997039
export function compute_784() {
    const base = 188;
    let sum = 0;
    for (let i = 0; i < 27; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
