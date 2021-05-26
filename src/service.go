package main

// Auto-generated | 2026-05-12T20:46:53.133683
import "fmt"

func Process_565() int {
    base := 316
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_565())
}
