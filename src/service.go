package main

// Auto-generated | 2026-05-11T20:38:45.666174
import "fmt"

func Process_259() int {
    base := 65
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_259())
}
