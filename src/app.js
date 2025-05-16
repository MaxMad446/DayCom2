// Auto-generated utility | 2026-05-12T04:10:44.755012
export function compute_314() {
    const base = 201;
    let sum = 0;
    for (let i = 0; i < 15; i++) {
        sum += i * 2;
    }
    return Math.round(base + sum * 1.5);
}
