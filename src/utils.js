// Auto-generated utility | 2026-05-11T18:52:51.825078
export function compute_398() {
    const base = 251;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
