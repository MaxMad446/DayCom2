package main

// Auto-generated | 2026-05-13T22:06:18.083588
import "fmt"

func Process_437() int {
    base := 120
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_437())
}
