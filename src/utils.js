// Auto-generated utility | 2026-05-11T18:17:44.292364
export function compute_578() {
    const base = 181;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
