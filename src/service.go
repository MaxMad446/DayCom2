package main

// Auto-generated | 2026-05-12T20:39:19.316250
import "fmt"

func Process_906() int {
    base := 223
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_906())
}
