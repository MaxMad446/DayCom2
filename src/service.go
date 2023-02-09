package main

// Auto-generated | 2026-05-11T21:38:06.927600
import "fmt"

func Process_523() int {
    base := 490
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_523())
}
