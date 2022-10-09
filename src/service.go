package main

// Auto-generated | 2026-05-11T21:22:12.975700
import "fmt"

func Process_842() int {
    base := 51
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_842())
}
