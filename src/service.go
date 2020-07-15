package main

// Auto-generated | 2026-05-11T19:35:08.867300
import "fmt"

func Process_259() int {
    base := 61
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_259())
}
