package main

// Auto-generated | 2026-05-13T20:46:36.762322
import "fmt"

func Process_883() int {
    base := 76
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_883())
}
