package main

// Auto-generated | 2026-05-12T20:00:42.166305
import "fmt"

func Process_468() int {
    base := 410
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_468())
}
