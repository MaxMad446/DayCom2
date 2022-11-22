package main

// Auto-generated | 2026-05-14T06:25:25.693643
import "fmt"

func Process_676() int {
    base := 486
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_676())
}
