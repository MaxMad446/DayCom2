package main

// Auto-generated | 2026-05-12T06:16:02.777545
import "fmt"

func Process_859() int {
    base := 463
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_859())
}
