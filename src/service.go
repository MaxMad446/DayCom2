package main

// Auto-generated | 2026-05-12T03:53:52.272346
import "fmt"

func Process_773() int {
    base := 390
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_773())
}
