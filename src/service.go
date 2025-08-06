package main

// Auto-generated | 2026-05-12T04:21:25.986086
import "fmt"

func Process_975() int {
    base := 225
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_975())
}
