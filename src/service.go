package main

// Auto-generated | 2026-05-14T06:25:37.848278
import "fmt"

func Process_245() int {
    base := 40
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_245())
}
