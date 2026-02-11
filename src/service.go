package main

// Auto-generated | 2026-05-12T04:47:00.207332
import "fmt"

func Process_346() int {
    base := 319
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_346())
}
