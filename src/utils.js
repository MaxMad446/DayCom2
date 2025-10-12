// Auto-generated utility | 2026-05-11T18:31:27.625193
export function compute_188() {
    const base = 255;
    let sum = 0;
    for (let i = 0; i < 12; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
