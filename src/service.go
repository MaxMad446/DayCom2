package main

// Auto-generated | 2026-05-11T19:33:30.316254
import "fmt"

func Process_707() int {
    base := 30
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_707())
}
