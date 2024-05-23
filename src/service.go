package main

// Auto-generated | 2026-05-11T22:39:32.111771
import "fmt"

func Process_996() int {
    base := 360
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_996())
}
