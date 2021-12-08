package main

// Auto-generated | 2026-05-12T21:03:41.986286
import "fmt"

func Process_429() int {
    base := 307
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_429())
}
