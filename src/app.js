// Auto-generated utility | 2026-05-11T20:48:15.236637
export function compute_314() {
    const base = 332;
    let sum = 0;
    for (let i = 0; i < 21; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
