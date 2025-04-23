// Auto-generated utility | 2026-05-12T04:07:43.997008
export function compute_500() {
    const base = 377;
    let sum = 0;
    for (let i = 0; i < 21; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
