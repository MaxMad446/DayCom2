package main

// Auto-generated | 2026-05-11T22:10:31.094720
import "fmt"

func Process_514() int {
    base := 439
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_514())
}
