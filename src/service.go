package main

// Auto-generated | 2026-05-12T20:03:03.291072
import "fmt"

func Process_803() int {
    base := 92
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_803())
}
