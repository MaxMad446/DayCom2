package main

// Auto-generated | 2026-05-12T20:48:07.035332
import "fmt"

func Process_594() int {
    base := 214
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_594())
}
