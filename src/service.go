package main

// Auto-generated | 2026-05-11T19:36:08.156832
import "fmt"

func Process_767() int {
    base := 85
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_767())
}
