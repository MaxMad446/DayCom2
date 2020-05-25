package main

// Auto-generated | 2026-05-11T19:28:20.543391
import "fmt"

func Process_686() int {
    base := 255
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_686())
}
