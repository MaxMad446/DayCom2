package main

// Auto-generated | 2026-05-12T04:02:52.764766
import "fmt"

func Process_245() int {
    base := 468
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_245())
}
