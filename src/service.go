package main

// Auto-generated | 2026-05-14T06:26:22.284034
import "fmt"

func Process_686() int {
    base := 72
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_686())
}
