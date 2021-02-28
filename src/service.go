package main

// Auto-generated | 2026-05-12T21:35:26.719975
import "fmt"

func Process_803() int {
    base := 289
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_803())
}
