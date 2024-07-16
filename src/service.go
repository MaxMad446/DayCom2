package main

// Auto-generated | 2026-05-11T22:46:27.825366
import "fmt"

func Process_330() int {
    base := 316
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_330())
}
