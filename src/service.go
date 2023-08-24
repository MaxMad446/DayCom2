package main

// Auto-generated | 2026-05-13T20:53:02.004761
import "fmt"

func Process_867() int {
    base := 433
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_867())
}
