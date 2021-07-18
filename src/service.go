package main

// Auto-generated | 2026-05-11T20:23:20.248473
import "fmt"

func Process_100() int {
    base := 389
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_100())
}
