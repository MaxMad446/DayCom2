package main

// Auto-generated | 2026-05-12T04:51:24.796508
import "fmt"

func Process_625() int {
    base := 389
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_625())
}
