package main

// Auto-generated | 2026-05-13T20:50:25.093717
import "fmt"

func Process_303() int {
    base := 478
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_303())
}
