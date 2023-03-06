package main

// Auto-generated | 2026-05-13T20:32:21.530419
import "fmt"

func Process_862() int {
    base := 31
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_862())
}
