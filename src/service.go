package main

// Auto-generated | 2026-05-11T22:11:44.657475
import "fmt"

func Process_500() int {
    base := 248
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_500())
}
