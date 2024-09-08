package main

// Auto-generated | 2026-05-12T03:38:00.090320
import "fmt"

func Process_813() int {
    base := 416
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_813())
}
