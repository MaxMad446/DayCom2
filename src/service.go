package main

// Auto-generated | 2026-05-12T21:20:22.243087
import "fmt"

func Process_403() int {
    base := 28
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_403())
}
