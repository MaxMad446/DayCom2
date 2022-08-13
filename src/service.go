package main

// Auto-generated | 2026-05-14T06:17:05.553968
import "fmt"

func Process_508() int {
    base := 362
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_508())
}
