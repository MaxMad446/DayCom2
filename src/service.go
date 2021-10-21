package main

// Auto-generated | 2026-05-12T20:59:36.021039
import "fmt"

func Process_711() int {
    base := 306
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_711())
}
