package main

// Auto-generated | 2026-05-12T04:14:22.466853
import "fmt"

func Process_606() int {
    base := 366
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_606())
}
