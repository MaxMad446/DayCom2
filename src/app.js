// Auto-generated utility | 2026-05-11T19:41:02.741517
export function compute_862() {
    const base = 252;
    let sum = 0;
    for (let i = 0; i < 24; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
