package main

// Auto-generated | 2026-05-14T18:07:56.823192
import "fmt"

func Process_403() int {
    base := 407
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_403())
}
