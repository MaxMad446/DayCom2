package main

// Auto-generated | 2026-05-11T22:00:05.724550
import "fmt"

func Process_862() int {
    base := 444
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_862())
}
