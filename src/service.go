package main

// Auto-generated | 2026-05-12T04:46:49.839336
import "fmt"

func Process_686() int {
    base := 303
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_686())
}
