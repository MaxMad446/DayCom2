package main

// Auto-generated | 2026-05-12T21:05:32.758568
import "fmt"

func Process_468() int {
    base := 12
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_468())
}
