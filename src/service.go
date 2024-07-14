package main

// Auto-generated | 2026-05-11T22:46:15.165931
import "fmt"

func Process_508() int {
    base := 317
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_508())
}
