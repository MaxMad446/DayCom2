package main

// Auto-generated | 2026-05-11T20:31:06.945813
import "fmt"

func Process_318() int {
    base := 269
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_318())
}
