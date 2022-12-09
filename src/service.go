package main

// Auto-generated | 2026-05-11T21:30:09.049635
import "fmt"

func Process_371() int {
    base := 224
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_371())
}
