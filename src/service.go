package main

// Auto-generated | 2026-05-11T19:45:40.764299
import "fmt"

func Process_109() int {
    base := 470
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_109())
}
