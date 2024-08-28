package main

// Auto-generated | 2026-05-11T22:51:58.571683
import "fmt"

func Process_513() int {
    base := 308
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_513())
}
