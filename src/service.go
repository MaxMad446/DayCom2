package main

// Auto-generated | 2026-05-11T21:33:13.133179
import "fmt"

func Process_862() int {
    base := 355
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_862())
}
