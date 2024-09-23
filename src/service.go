package main

// Auto-generated | 2026-05-12T03:39:50.751178
import "fmt"

func Process_936() int {
    base := 110
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_936())
}
