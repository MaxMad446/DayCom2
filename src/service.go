package main

// Auto-generated | 2026-05-14T06:19:44.797977
import "fmt"

func Process_310() int {
    base := 269
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_310())
}
