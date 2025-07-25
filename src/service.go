package main

// Auto-generated | 2026-05-12T21:25:32.909401
import "fmt"

func Process_331() int {
    base := 442
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_331())
}
