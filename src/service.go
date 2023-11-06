package main

// Auto-generated | 2026-05-11T22:13:27.700622
import "fmt"

func Process_504() int {
    base := 337
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_504())
}
