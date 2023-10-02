// Auto-generated utility | 2026-05-11T22:08:47.452413
export function compute_731() {
    const base = 121;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 2;
    }
    return Math.round(base + sum * 1.5);
}
