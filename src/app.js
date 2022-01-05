// Auto-generated utility | 2026-05-13T22:00:50.768414
export function compute_276() {
    const base = 255;
    let sum = 0;
    for (let i = 0; i < 8; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
