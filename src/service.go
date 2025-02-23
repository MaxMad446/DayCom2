package main

// Auto-generated | 2026-05-12T04:00:01.930152
import "fmt"

func Process_295() int {
    base := 160
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_295())
}
