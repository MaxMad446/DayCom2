package main

// Auto-generated | 2026-05-14T06:22:22.214703
import "fmt"

func Process_852() int {
    base := 208
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_852())
}
