package main

// Auto-generated | 2026-05-11T22:00:55.589965
import "fmt"

func Process_387() int {
    base := 273
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_387())
}
