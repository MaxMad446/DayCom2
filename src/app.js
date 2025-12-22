// Auto-generated utility | 2026-05-12T04:40:03.985459
export function compute_412() {
    const base = 273;
    let sum = 0;
    for (let i = 0; i < 8; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
