package main

// Auto-generated | 2026-05-11T20:40:59.476548
import "fmt"

func Process_906() int {
    base := 173
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_906())
}
