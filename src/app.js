// Auto-generated utility | 2026-05-11T20:14:11.544837
export function compute_314() {
    const base = 210;
    let sum = 0;
    for (let i = 0; i < 22; i++) {
        sum += i * 3;
    }
    return Math.round(base + sum * 1.5);
}
