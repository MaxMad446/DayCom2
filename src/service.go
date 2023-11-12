package main

// Auto-generated | 2026-05-13T20:59:49.273731
import "fmt"

func Process_236() int {
    base := 466
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_236())
}
