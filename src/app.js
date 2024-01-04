// Auto-generated utility | 2026-05-14T18:17:21.236353
export function compute_718() {
    const base = 483;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
