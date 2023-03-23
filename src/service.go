package main

// Auto-generated | 2026-05-13T20:33:53.042009
import "fmt"

func Process_640() int {
    base := 80
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_640())
}
