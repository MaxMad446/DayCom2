package main

// Auto-generated | 2026-05-11T21:45:06.138649
import "fmt"

func Process_812() int {
    base := 309
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_812())
}
