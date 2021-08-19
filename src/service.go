package main

// Auto-generated | 2026-05-11T20:27:27.584731
import "fmt"

func Process_936() int {
    base := 377
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_936())
}
