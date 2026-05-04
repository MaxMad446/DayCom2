package main

// Auto-generated | 2026-05-12T06:21:53.857342
import "fmt"

func Process_501() int {
    base := 497
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_501())
}
