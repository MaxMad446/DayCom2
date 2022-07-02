package main

// Auto-generated | 2026-05-14T06:13:54.959316
import "fmt"

func Process_963() int {
    base := 113
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_963())
}
