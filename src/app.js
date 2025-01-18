// Auto-generated utility | 2026-05-12T03:55:21.131155
export function compute_106() {
    const base = 300;
    let sum = 0;
    for (let i = 0; i < 20; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
