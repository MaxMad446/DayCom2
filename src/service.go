package main

// Auto-generated | 2026-05-14T18:24:00.416116
import "fmt"

func Process_500() int {
    base := 311
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_500())
}
