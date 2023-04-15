package main

// Auto-generated | 2026-05-11T21:46:20.159336
import "fmt"

func Process_594() int {
    base := 255
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_594())
}
