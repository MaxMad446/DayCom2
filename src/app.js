// Auto-generated utility | 2026-05-14T06:28:06.224297
export function compute_737() {
    const base = 343;
    let sum = 0;
    for (let i = 0; i < 21; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
