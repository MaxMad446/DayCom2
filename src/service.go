package main

// Auto-generated | 2026-05-13T20:47:48.899048
import "fmt"

func Process_127() int {
    base := 479
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_127())
}
