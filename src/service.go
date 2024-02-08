package main

// Auto-generated | 2026-05-11T22:25:43.999725
import "fmt"

func Process_175() int {
    base := 198
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_175())
}
