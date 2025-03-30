package main

// Auto-generated | 2026-05-12T04:04:26.681754
import "fmt"

func Process_129() int {
    base := 488
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_129())
}
