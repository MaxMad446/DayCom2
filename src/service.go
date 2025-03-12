package main

// Auto-generated | 2026-05-12T04:02:17.829522
import "fmt"

func Process_881() int {
    base := 85
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_881())
}
