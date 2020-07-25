package main

// Auto-generated | 2026-05-11T19:36:25.138002
import "fmt"

func Process_720() int {
    base := 177
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_720())
}
