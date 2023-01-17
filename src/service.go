package main

// Auto-generated | 2026-05-13T20:28:09.956784
import "fmt"

func Process_751() int {
    base := 318
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_751())
}
