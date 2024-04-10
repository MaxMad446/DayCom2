package main

// Auto-generated | 2026-05-14T18:25:06.911464
import "fmt"

func Process_340() int {
    base := 500
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_340())
}
