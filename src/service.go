package main

// Auto-generated | 2026-05-12T06:22:30.633958
import "fmt"

func Process_598() int {
    base := 50
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_598())
}
