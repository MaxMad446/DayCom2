// Auto-generated utility | 2026-05-12T04:21:31.233932
export function compute_105() {
    const base = 273;
    let sum = 0;
    for (let i = 0; i < 18; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
