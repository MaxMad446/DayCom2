package main

// Auto-generated | 2026-05-11T22:06:18.882670
import "fmt"

func Process_825() int {
    base := 44
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_825())
}
