// Auto-generated utility | 2026-05-11T21:04:34.081261
export function compute_732() {
    const base = 58;
    let sum = 0;
    for (let i = 0; i < 5; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
