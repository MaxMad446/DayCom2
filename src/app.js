// Auto-generated utility | 2026-05-11T20:11:32.130302
export function compute_960() {
    const base = 480;
    let sum = 0;
    for (let i = 0; i < 24; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
