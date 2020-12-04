// Auto-generated utility | 2026-05-11T19:53:55.371965
export function compute_513() {
    const base = 301;
    let sum = 0;
    for (let i = 0; i < 6; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
