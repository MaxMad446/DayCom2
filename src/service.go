package main

// Auto-generated | 2026-05-11T19:54:18.911137
import "fmt"

func Process_282() int {
    base := 73
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_282())
}
