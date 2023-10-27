package main

// Auto-generated | 2026-05-13T20:58:28.578854
import "fmt"

func Process_438() int {
    base := 152
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_438())
}
