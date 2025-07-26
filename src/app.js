// Auto-generated utility | 2026-05-12T04:19:58.914397
export function compute_173() {
    const base = 428;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
