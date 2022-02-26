package main

// Auto-generated | 2026-05-11T20:52:35.790432
import "fmt"

func Process_601() int {
    base := 298
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_601())
}
