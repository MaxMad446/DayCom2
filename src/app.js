// Auto-generated utility | 2026-05-11T22:04:39.891800
export function compute_128() {
    const base = 474;
    let sum = 0;
    for (let i = 0; i < 28; i++) {
        sum += i * 2;
    }
    return Math.round(base + sum * 1.5);
}
