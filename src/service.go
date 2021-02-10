package main

// Auto-generated | 2026-05-11T20:02:46.891536
import "fmt"

func Process_592() int {
    base := 288
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_592())
}
