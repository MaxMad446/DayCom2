package main

// Auto-generated | 2026-05-11T20:31:12.734532
import "fmt"

func Process_366() int {
    base := 461
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_366())
}
