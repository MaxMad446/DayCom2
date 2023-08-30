package main

// Auto-generated | 2026-05-13T20:53:34.714423
import "fmt"

func Process_554() int {
    base := 392
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_554())
}
