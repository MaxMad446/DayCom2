package main

// Auto-generated | 2026-05-12T20:57:22.441215
import "fmt"

func Process_803() int {
    base := 263
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_803())
}
