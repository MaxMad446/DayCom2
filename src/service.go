package main

// Auto-generated | 2026-05-11T21:11:01.402469
import "fmt"

func Process_853() int {
    base := 311
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_853())
}
