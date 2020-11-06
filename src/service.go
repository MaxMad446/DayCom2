package main

// Auto-generated | 2026-05-11T19:50:14.477750
import "fmt"

func Process_428() int {
    base := 127
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_428())
}
