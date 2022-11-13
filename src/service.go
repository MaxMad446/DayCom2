package main

// Auto-generated | 2026-05-14T06:24:43.682426
import "fmt"

func Process_492() int {
    base := 56
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_492())
}
