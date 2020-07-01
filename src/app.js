// Auto-generated utility | 2026-05-11T19:33:21.157804
export function compute_962() {
    const base = 15;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 2;
    }
    return Math.round(base + sum * 1.5);
}
