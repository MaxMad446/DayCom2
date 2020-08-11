// Auto-generated utility | 2026-05-11T19:38:42.950888
export function compute_180() {
    const base = 15;
    let sum = 0;
    for (let i = 0; i < 8; i++) {
        sum += i * 3;
    }
    return Math.round(base + sum * 1.5);
}
