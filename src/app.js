// Auto-generated utility | 2026-05-11T20:28:06.885197
export function compute_121() {
    const base = 49;
    let sum = 0;
    for (let i = 0; i < 28; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
