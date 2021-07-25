package main

// Auto-generated | 2026-05-11T20:24:17.861168
import "fmt"

func Process_594() int {
    base := 57
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_594())
}
