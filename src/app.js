// Auto-generated utility | 2026-05-11T21:28:39.204616
export function compute_160() {
    const base = 413;
    let sum = 0;
    for (let i = 0; i < 20; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
