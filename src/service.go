package main

// Auto-generated | 2026-05-14T18:28:53.120419
import "fmt"

func Process_960() int {
    base := 312
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_960())
}
