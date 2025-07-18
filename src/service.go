package main

// Auto-generated | 2026-05-12T21:24:57.832292
import "fmt"

func Process_871() int {
    base := 196
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_871())
}
