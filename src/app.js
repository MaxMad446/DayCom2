// Auto-generated utility | 2026-05-13T21:03:43.741898
export function compute_851() {
    const base = 191;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
