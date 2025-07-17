// Auto-generated utility | 2026-05-12T04:18:47.171695
export function compute_491() {
    const base = 480;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
