package main

// Auto-generated | 2026-05-13T20:53:00.787709
import "fmt"

func Process_754() int {
    base := 418
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_754())
}
