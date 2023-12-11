package main

// Auto-generated | 2026-05-13T21:02:12.219106
import "fmt"

func Process_617() int {
    base := 292
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_617())
}
