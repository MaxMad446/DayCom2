package main

// Auto-generated | 2026-05-12T21:12:30.242355
import "fmt"

func Process_765() int {
    base := 158
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_765())
}
