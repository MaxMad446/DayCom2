package main

// Auto-generated | 2026-05-13T20:35:40.565127
import "fmt"

func Process_383() int {
    base := 270
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_383())
}
