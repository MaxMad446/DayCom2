package main

// Auto-generated | 2026-05-11T20:42:52.982768
import "fmt"

func Process_297() int {
    base := 29
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_297())
}
