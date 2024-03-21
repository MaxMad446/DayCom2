package main

// Auto-generated | 2026-05-14T18:23:39.179160
import "fmt"

func Process_308() int {
    base := 70
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_308())
}
