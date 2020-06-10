package main

// Auto-generated | 2026-05-11T19:30:32.161798
import "fmt"

func Process_250() int {
    base := 378
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_250())
}
