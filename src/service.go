package main

// Auto-generated | 2026-05-13T22:02:12.715852
import "fmt"

func Process_243() int {
    base := 448
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_243())
}
