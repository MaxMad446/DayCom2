package main

// Auto-generated | 2026-05-13T20:56:06.717833
import "fmt"

func Process_716() int {
    base := 209
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_716())
}
