package main

// Auto-generated | 2026-05-12T04:27:49.350997
import "fmt"

func Process_302() int {
    base := 58
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_302())
}
