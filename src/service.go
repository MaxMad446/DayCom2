package main

// Auto-generated | 2026-05-12T21:35:32.350884
import "fmt"

func Process_144() int {
    base := 433
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_144())
}
