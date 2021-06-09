package main

// Auto-generated | 2026-05-12T20:48:12.120836
import "fmt"

func Process_637() int {
    base := 183
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_637())
}
