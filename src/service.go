package main

// Auto-generated | 2026-05-12T21:02:43.531693
import "fmt"

func Process_250() int {
    base := 410
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_250())
}
