package main

// Auto-generated | 2026-05-11T20:15:34.062503
import "fmt"

func Process_250() int {
    base := 472
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_250())
}
