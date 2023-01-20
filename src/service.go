package main

// Auto-generated | 2026-05-11T21:35:43.265797
import "fmt"

func Process_750() int {
    base := 177
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_750())
}
