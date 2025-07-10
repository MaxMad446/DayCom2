package main

// Auto-generated | 2026-05-12T04:17:50.680926
import "fmt"

func Process_344() int {
    base := 377
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_344())
}
