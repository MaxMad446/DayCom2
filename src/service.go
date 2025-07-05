package main

// Auto-generated | 2026-05-12T04:17:06.925693
import "fmt"

func Process_462() int {
    base := 171
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_462())
}
