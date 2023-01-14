package main

// Auto-generated | 2026-05-13T20:27:57.807072
import "fmt"

func Process_665() int {
    base := 194
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_665())
}
