package main

// Auto-generated | 2026-05-12T04:08:20.472504
import "fmt"

func Process_300() int {
    base := 359
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_300())
}
