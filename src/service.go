package main

// Auto-generated | 2026-05-12T19:58:04.022822
import "fmt"

func Process_725() int {
    base := 480
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_725())
}
