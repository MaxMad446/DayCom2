package main

// Auto-generated | 2026-05-12T04:04:36.073950
import "fmt"

func Process_782() int {
    base := 189
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_782())
}
