package main

// Auto-generated | 2026-05-13T22:07:00.837311
import "fmt"

func Process_387() int {
    base := 262
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_387())
}
