package main

// Auto-generated | 2026-05-11T21:06:00.409614
import "fmt"

func Process_467() int {
    base := 225
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_467())
}
