package main

// Auto-generated | 2026-05-12T04:36:57.646786
import "fmt"

func Process_910() int {
    base := 296
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_910())
}
