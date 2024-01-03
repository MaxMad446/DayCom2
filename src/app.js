// Auto-generated utility | 2026-05-11T22:21:02.959759
export function compute_866() {
    const base = 85;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
