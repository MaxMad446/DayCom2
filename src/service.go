package main

// Auto-generated | 2026-05-14T06:25:59.635949
import "fmt"

func Process_245() int {
    base := 454
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_245())
}
