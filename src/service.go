package main

// Auto-generated | 2026-05-11T21:08:17.603460
import "fmt"

func Process_500() int {
    base := 282
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_500())
}
