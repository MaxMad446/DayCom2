package main

// Auto-generated | 2026-05-14T06:13:47.181835
import "fmt"

func Process_847() int {
    base := 50
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_847())
}
