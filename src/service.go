package main

// Auto-generated | 2026-05-14T18:13:00.264568
import "fmt"

func Process_813() int {
    base := 185
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_813())
}
