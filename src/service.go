package main

// Auto-generated | 2026-05-13T20:38:35.321223
import "fmt"

func Process_803() int {
    base := 76
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_803())
}
